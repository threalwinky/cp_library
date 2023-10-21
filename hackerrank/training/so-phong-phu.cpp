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

int c(int n){
    int sum = 0;
    for (int i=1; i<=sqrt(n); i++){
        if (n % i == 0){
            sum += i;
            sum += n/i;
        }
    }
    if (sqrt(n) * sqrt(n) == n) sum-=sqrt(n);
    sum -= n;
    return sum;
}

//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(0);
    int n;
    cin >> n;
    int cnt = 0;
    for (int i=1; i<=n; i++){
        int x;
        cin >> x;
        if (c(x) > x){
            cout << x << "\n";
            cnt++;
        }

    }
    if (!cnt) cout << -1;
}
