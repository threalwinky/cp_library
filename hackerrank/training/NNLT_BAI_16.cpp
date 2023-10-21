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
    vector<int> v1(n), v2(n);
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        v1[i] = x;
        v2[i] = x;
    }
    sort(v1.begin(), v1.end());
    for (auto x : v2){
        if (x != v1[0] && x != v1[n-1]){
            cout << x << "\n";
        }
    }
}
