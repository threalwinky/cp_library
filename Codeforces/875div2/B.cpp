/**
 *   author: winky
 *   created: 2023-05-28 21:39:07
**/

#include                    <bits/stdc++.h>
using namespace             std;
#define tri(a, b, c)        ((a) ? (b) : (c))
#define pb(x)               push_back(x)
#define fi                  first
#define se                  second
#define debug(x)            cerr<<"+Debug for "<<(#x)<<" : "<<x<<"\n";
#define endl                cout<<"\n";
//#define int               long long
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

signed main(){
    IO(3);//1 for INP, 2 for INP and OUT, 3 for stdio
    int T;
    cin >> T;
    while (T--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        map<int, int> j, k;
        cin >> a[0];
        int tmp = 1;
        for (int i=1; i<n; i++){
            cin >> a[i];
            if (a[i] != a[i - 1]){
                j[a[i - 1]] = max(j[a[i - 1]], tmp);
                tmp = 1;
            }
            else tmp++;
        }
        j[a[n - 1]] = max(j[a[n - 1]], tmp);
        cin >> a[0];
        tmp = 1;
        for (int i=1; i<n; i++){
            cin >> a[i];
            if (a[i] != a[i - 1]){
                k[a[i - 1]] = max(k[a[i - 1]], tmp);
                tmp = 1;
            }
            else tmp++;
        }
        k[a[n - 1]] = max(k[a[n - 1]], tmp);
        int ans = 0;
        for (auto x : j)
        {
            ans = max(ans, x.se + k[x.fi]);
        }
        for (auto x : k){
            ans = max(ans, x.se + j[x.fi]);
        }
        cout << ans << "\n";
    }
}   