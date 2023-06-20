/**
 *   author: winky
 *   created: 2023-06-06 22:13:18
**/

#include                    <bits/stdc++.h>
using namespace             std;
#define tri(a, b, c)        ((a) ? (b) : (c))
#define pb(x)               push_back(x)
#define fi                  first
#define se                  second
#define debug(x)            cerr<<"+Debug for "<<(#x)<<" : "<<x<<"\n";
#define endl                cout<<"\n";
#define int               long long
typedef pair<int, int>      ii;
typedef long long           ll;
const int maxN =            3e5;
const int mod =             1e9 + 7;
const int inf =             INT_MAX;
const double PI =           3.14159265358979;
const auto INP_FILE =       "sample.inp";
const auto OUT_FILE =       "sample.out";
void IO(short choice){      if (choice == 1) freopen(INP_FILE, "r", stdin);
else                        if (choice == 2){freopen(INP_FILE, "r", stdin); freopen(OUT_FILE, "w", stdout);}
else                        if (choice == 3) ios::sync_with_stdio(false);cin.tie(nullptr);}
/*----- ----- ----- ----- ----- ----- ----- ----- ----- -----*/

int F[maxN];

signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    int T;
    cin >> T;
    F[1] = 1;
    for (int i=2; i<=200009; i++){
        F[i] = F[i-1] + i;
    }
    while (T--){
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n + 9, 0);
        for (int i=1; i<=n; i++){
            cin >> v[i];
        }
        int tmp = 0, ans = 0;
        for (int i=1; i<=n; i++){
            if (v[i] <= q){
                //cout << v[i] << " ";
                tmp++;
            }
            else{
                if (tmp >= k)
                ans += F[tmp - k + 1];
                tmp = 0;
            }
        }
        if (tmp >= k) ans += F[tmp - k + 1];
        cout << ans << "\n";
    }
}