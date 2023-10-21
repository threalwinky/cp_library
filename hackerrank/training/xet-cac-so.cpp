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

int a[10003];
bool p[1000003];

void sieve(){
    p[0] = p[1] = 1;
    for (int i=2; i<=1000003; i++){
        if (!p[i])
        for (int j=2*i; j<=1000003; j+=i){
            p[j] = 1;
        }
    }
}

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
    sieve();
    int n;
    cin >> n;
    map<int, int> m1, m2, m3;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        if (p[a[i]] == 0){
            if (m1[a[i]] == 0){
                cout << a[i] << " ";
                m1[a[i]]++;
            }
        }
    }
    cout << "\n";
    for (int i=1; i<=n; i++){
        if (c(a[i]) == a[i]){
            if (m2[a[i]] == 0){
                cout << a[i] << " ";
                m2[a[i]]++;
            }
        }
    }
    cout << "\n";
    for (int i=1; i<=n; i++){
        if (sqrt(a[i]) * sqrt(a[i]) == a[i]){
            if (m3[a[i]] == 0){
                cout << a[i] << " ";
                m3[a[i]]++;
            }
        }
    }
}
