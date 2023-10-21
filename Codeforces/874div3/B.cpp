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
        vector<int> v(n), v1;
        for (int i=0; i<n; i++){
            cin >> v[i];
        }
        v1.push_back(v[0]);
        for (int i=1; i<n; i++){
            if (v[i] >= v[i-1]){
                v1.push_back(v[i]);
            }
            else{
                v1.push_back(min(v[i], v[i-1]-1));
                v1.push_back(v[i]);
            }
        }
        cout << v1.size() << "\n";
        for (auto it : v1) cout << it << " ";
        cout << "\n";

    }
}
