
#include                    <bits/stdc++.h>
using                       namespace std;
#define int               long long
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
    int a, b;
    cin >> a >> b;
    int ar = a * b;
    int mx = -1000;
    for (int i=1; i<=sqrtl(ar); i++){
//        cout << i << " ";
        int s = i * i;
        int n = ar / s;
        if (n * s == ar && a % i == 0 && b % i == 0){
            mx = max(mx, i);
        }
    }
    cout << mx;
}
