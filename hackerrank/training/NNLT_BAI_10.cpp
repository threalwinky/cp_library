
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
    ldb a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    ldb f = (a * 2 + b * 3 + c + d + 2 * e)/9;
    cout << fixed << setprecision(1) << f << "\n";
    if (f < 5){
        cout << "YEU";
    }
    else if (f >= 5 && f < 6.5){
        cout << "TB";
    }
    else if (f >= 6.5 && f < 8){
        cout << "KHA";
    }
    else cout << "GIOI";
}
