/**
 *   author: winky
 *   created: 2023-06-02 21:46:18
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

vector<int> v(maxN);

signed main(){
    IO(1);//1 for INP, 2 for INP and OUT, 3 for stdio
    int n, s;
    int x, y;
    cin >> n >> s;
    cin >> x >> y;
    long double tmp1 = (long double)(s * 2) / y;
    int tmp2 = (int)tmp1;
    for (int i = 1; i<=n; i++){
        cin >> v[i];
    }
    sort(v.begin() + 1, v.begin() + n + 1);
    int ans = 0;
    for (int i = 1; i<=n; i++){
        auto it = lower_bound(v.begin() + 1, v.begin() + n + 1, v[i] + tmp2 + 1);
        ans += n - distance(v.begin() + 1, it);
    }
    //cout << v[n];
    cout << ans;
}