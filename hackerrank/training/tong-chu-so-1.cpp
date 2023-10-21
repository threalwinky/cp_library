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

int sd(int n){
    int sum = 0;
    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(0);
    vector<int> v;
    for (int i=1; i<=40000; i++){
        if (i % sd(i) == 0){
            v.push_back(i);
        }
    }
//    for (auto it : v){
//        cout << it << " ";
//    }
    int n;
    cin >> n;
    cout << *lower_bound(v.rbegin(), v.rend(), n, greater<int>());
}
