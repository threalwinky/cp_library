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
int a[1003][1003];
int f[1003];
//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(0);
    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> a[i][j];
            f[i] += a[i][j];
        }
    }
    for (int i=2; i<=n; i++){
        if (f[i] != f[i-1]){
            cout << -1;
            return 0;
        }
    }
    int b = 0, c = 0;
    for (int i=1; i<=n; i++){
        b += a[i][i];
        c += a[i][n - i + 1];
    }
    if (b == c && b == f[n]){
        cout << b;
    }
    else cout << -1;
}
