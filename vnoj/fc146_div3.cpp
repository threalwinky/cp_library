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
    long long n;
    cin >> n;
    int sum = 0, cnt1 = 0, cnt2 = 0, cnt=0;
    while (n > 0){
        sum += n % 10;
        cnt++;
        if (n % 10 % 3 == 1) cnt1++;
        if (n % 10 % 3 == 2) cnt2++;
        n /= 10;
    }
    if (sum % 3 == 0){
        cout << 0;
    }
    else{
        if (sum % 3 == 1){
            if (cnt1 > 0){
                cout << 1;
            }
            else if (cnt2 > 1){
                cout << 2;
            }
            else{
                cout << cnt;
            }
        }
        else{
            if (cnt2 > 0){
                cout << 1;
            }
            else if (cnt1 > 1){
                cout << 2;
            }
            else{
                cout << cnt;
            }
        }
    }
}
