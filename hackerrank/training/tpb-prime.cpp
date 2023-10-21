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

string s;
bool p[5000020];

void sieve(){
    for (int i=2; i<=5000015; i++){
        if (!p[i]){
            for (int j=2*i; j<=5000015; j+=i){
                p[j] = 1;
            }
            s += to_string(i);
        }
    }
}

//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(0);
    sieve();
    int q;
    cin >> q;
    while (q--){
        int n;
        cin >> n;
        cout << s.find(to_string(n)) + 1 << "\n";
    }
}
