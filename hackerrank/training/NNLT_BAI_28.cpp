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
    int n, m;
    cin >> n >> m;
    vector<int> v[10000];
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i=1; i<=n; i++){
        int mx = -1000000, mx_pos = 0;
        for (int j=0; j<m; j++){
            if (mx < v[i][j]){
                mx = v[i][j];
                mx_pos = j;
            }
        }
        int tmp = v[i][0];
        v[i][0] = v[i][mx_pos];
        v[i][mx_pos] = tmp;
        for (auto x : v[i]) cout << x << " ";
//        cout << mx_pos << " ";
        cout << "\n";
    }
}
