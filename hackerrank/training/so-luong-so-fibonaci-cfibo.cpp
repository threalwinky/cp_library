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
    vector<int> v(90);
    v[0] = 0;
    v[1] = v[2] = 1;
    for (int i=3; i<=80; i++){
        v[i] = v[i-1] + v[i-2];
//        cout << v[i] << " ";
    }
    int l, r;
    cin >> l >> r;
    int cnt = 0;
    for (int i=0; i<=80; i++){
        if (v[i] >= l && v[i] <= r){
            cnt++;
        }
    }
    cout << cnt;
}
