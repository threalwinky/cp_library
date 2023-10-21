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
int digits(int n){
    int cnt = 0;
    while (n > 0){
        n /= 10;
        cnt++;
    }
    return cnt;
}

int mx(int m){
    int n = 0;
    while (m >0){
        n = max(n, m % 10);
        m/=10;
    }
    return n;
}

int sum(int n){
    int res = 0;
    while (n > 0){
        res += n % 10;
        n/=10;
    }
    return res;
}

//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(0);
    int n;
    cin >> n;
    cout << digits(n) << "\n" << mx(n) << "\n" << sum(n);
}
