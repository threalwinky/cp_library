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

struct Tri{
    int a, b ,c, d, e;

};
bool operator < (const Tri a, const Tri b){
    return a.d < b.d;
}
//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(0);
    int n;
    cin >> n;
    vector<Tri> v;
    for (int i=1; i<=n; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        v.push_back({a, b, c, d, i});
    }
    map<Tri, int> m;
    for (int i=0; i<n; i++){
        bool flag = 0;
        const Tri a = v[i];
        for (int j=0; j<n; j++){
            Tri b = v[j];
            if (i != j){
                if (a.a < b.a && a.b < b.b && a.c < b.c){
                    flag = 1;
                }
            }
        }

        if (!flag) m[a] = 1;
    }
    auto it = m.begin();
    cout << (*it).fi.e;
}
