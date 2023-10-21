#include                    <bits/stdc++.h>
using                       namespace std;
//#define int               long long
#define fi                  first
#define se                  second
#define pb(x)               push_back(x)
#define endl                cout<<"\n";
typedef pair<int, int>      ii;
typedef vector<int>         vi;
typedef long double         ldb;
const string F =            "sample";
const string IF =           F + ".inp";
const string OF =           F + ".out";
const ldb PI =              3.14159265358979;
const int maxN =            1e6;
const int mod  =            1e9 + 7;
void opf(bool c){           if (c == 1){
freopen(IF.c_str(),         "r", stdin);
freopen(OF.c_str(),         "w", stdout);}}
//------------------------------------------------------------------------------------
//Code here


//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(0);
    int T;
    cin >> T;

    while (T--){
            map<char, int> mp[100];
        int n, m;
        cin >> n >> m;
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                char x;
                cin >> x;
                mp[j][x]++;
            }
        }
        bool flag = 1;
        int cnt = 0;
        for (int i=0; i<m; i++){
            if (cnt == 0 && mp[i]['v'] > 0){
                cnt ++;
                continue;
            }
            if (cnt == 1 && mp[i]['i'] > 0){
                cnt ++;
                continue;
            }
            if (cnt == 2 && mp[i]['k'] > 0){
                cnt ++;
                continue;
            }
            if (cnt == 3 && mp[i]['a'] > 0){
                cnt ++;
                continue;
            }
        }
        cout << ((cnt == 4) ? "YES" : "NO") << "\n";
    }
}
