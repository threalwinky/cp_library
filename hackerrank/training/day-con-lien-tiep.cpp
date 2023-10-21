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


int a[10003];
int f[10003];
//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(0);
    int n, k;
    cin >> n >> k;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        f[i] = f[i-1] + a[i];
    }
    vector<pair<int, int>> v;
    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
//            cout << f[i] - f[j] << "\n";
            if (f[i] - f[j] == k){
                v.push_back({j+1, i});
            }
        }
    }
    for (auto x : v){
        for (int i=x.fi; i<=x.se; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    if (v.size() == 0) cout << 0;
}
