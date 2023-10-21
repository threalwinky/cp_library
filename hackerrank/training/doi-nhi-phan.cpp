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
const string F =            "NHIPHAN";
const string IF =           F + ".INP";
const string OF =           F + ".OUT";
const ldb PI =              3.14159265358979;
const int maxN =            1e6;
const int mod  =            1e9 + 7;
void opf(bool c){           if (c == 1){
freopen(IF.c_str(),         "r", stdin);
freopen(OF.c_str(),         "w", stdout);}}
//------------------------------------------------------------------------------------
//Code here

pair<string, int> sol(int n){
    string tmp1;
    int tmp2 = 0;
    while (n!=0){
        if (n % 2 == 0){
            tmp1 = '0' + tmp1;
        }
        else{
            tmp1 = '1' + tmp1;
            tmp2++;
        }
        n/=2;

    }
    return {tmp1, tmp2};
}

//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(0);
    int n;
    cin >> n;
    pair<string, int> p = sol(n);
    cout << p.fi << "\n" << p.se;
}
