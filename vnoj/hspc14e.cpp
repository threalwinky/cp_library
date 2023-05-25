#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e8;
void fill(ll n){
    string s = to_string(n);
    int tmp = 8 - s.length();
    for (int i=0; i<tmp; i++){
        cout<<0;
    }
}

ll pow(ll a, ll b){
    if (b == 1) return a;
    if (b % 2 == 0) return (pow(a, b/2)%mod * pow(a, b/2)%mod)%mod;
    else return (pow(a, b/2)%mod * pow(a, b/2)%mod * a%mod)%mod;
}

ll expo(ll a, ll b){
    if (b == 1) return a;
    return pow(a, expo(a, b - 1) % mod) % mod;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll a, b;
    cin>>a>>b;
    fill(expo(a, b) % mod);
    cout<<expo(a, b) % mod;
}
