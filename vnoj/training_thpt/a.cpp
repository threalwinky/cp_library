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

vector<int> e2(int a, int b, int c){
    int delta = b * b - 4 * a * c;
    vector<int> tmp;
    if (delta < 0) return tmp;
    if (delta == 0){
        tmp.push_back(-b/(2*a));
        return tmp;
    }
    tmp.push_back((-b+sqrtl(delta))/(2*a));
    tmp.push_back((-b-sqrtl(delta))/(2*a));
    return tmp;
}

int t(int n){
    int d = 0;
    while (n != 0){
        n/=10;
        d++;
    }
    return d;
}

//------------------------------------------------------------------------------------
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    opf(0);
    int n;
    cin >> n;
    for (int i=1;i <=18; i++){
        vector<int> res = e2(1, i, -n);
        for (auto x : res){
            if (t(x) == i && x > 0 && x*x+t(x)*x-n==0){
                cout << x;
                return 0;
            }
        }
    }
    cout << -1;
//    vector<int> tmp = e2(-567, 3837, 19985);
//    for (auto it : tmp) cout << it << " ";
}
