
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
    int n;
    cin >> n;
    map<int, int> m;
    for (int i=1; i<=n; i++){
        int x;
        cin >> x;
        m[x]++;
    }
    int mx = -1000;
    for (auto x : m){
        mx = max(mx, x.se);
    }
    vector<int> v;
    for (auto x : m){
        if (x.se == mx){
            v.push_back(x.fi);
        }
    }
    for (auto x : v){
        cout << x << "\n";
    }
}
