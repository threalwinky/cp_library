#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll supow(ll a, ll b, ll m){
    a %= m;
    ll res = 1;
    while (b != 0){
        if (b & 1) res = (res%m*a%m)%m;
        a = (a%m*a%m)%m;
        b >>= 1;
    }
    return res;
}

ll test(ll s, ll d, ll n, ll a){
    if (n == a) return 1;
    ll p = supow(a, d, n);
    if (p == 1) return 1;
    for (;s>0;s--){
        if (p == n-1) return 1;
        p = (p%n*p%n)%n;
    }
    return 0;
}

ll prime(ll n){
    if (n < 2) return 0;
    if (!(n&1)) return n == 2;
    ll s = __builtin_ctz(n-1);
    ll d = (n-1) >> s;
    return test(s, d, n, 2) && test(s, d, n, 3);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    for (int i=1; i<=n; i++){
        if (prime(i)){
            cout << i << " ";
        }
    }
}
