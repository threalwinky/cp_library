
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
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> f(n), f1(n + 1);
        map<int, int> m;

        for (int i=0; i<n; i++){
            cin >> v[i];
            m[v[i]]++;
        }
        int idx = 0;
        for (auto it : m){
            m[it.fi] = idx++;
        }

        for (auto it : v){
            f[m[it]]++;
        }
        f.push_back(0);
        reverse(f.begin(), f.end());
        for (int i=1; i<f.size(); i++){
            f1[i] = f1[i-1] + f[i];
        }
        for (auto it : f1){
            cout << it << " ";
        }
        cout << "\n";
    }
}
