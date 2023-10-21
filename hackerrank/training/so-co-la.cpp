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
    int k;
    cin >> k;
    int tmp = 0;
    for (int i=0; i<=100; i++){
        if ((1 << i) >= k){
            tmp = (1 << i);
            break;
        }
    }
    int ans = 0;
    int sum = 0;
    string s;
    int m = k;
    while (m != 0){
        if (m & 1){
            s += '1';
        }
        else{
            s += '0';
        }
        m/=2;
    }
    int t;
    for (int i=0; i<s.length(); i++){
        if (s[i] == '1'){
            t = i;
            break;
        }
    }
    cout << tmp << " " << s.length() - t;
}
