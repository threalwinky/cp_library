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
    string s;
    cin >> s;
    vector<char> v = {'u', 'e', 'o', 'a', 'i', 'y'};
    for (int i=0; i<s.length(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] -= 'A' - 'a';
        bool flag = 0;
        for (auto it : v){
            if (it == s[i]){
                flag = 1;
            }
        }
        if (!flag)
        cout << "." << s[i];
    }
}
