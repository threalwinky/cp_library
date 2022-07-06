#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
ll a, b;
map<ll, ll> m;
void inp(){
	cin>>a>>b;
}
int maxx(ll x, ll y){
	if (x>y) return x;
	else return y;
}
void out(){
	ll ans = 0;
	for (ll i = 1; i<=sqrt(a); i++){
		if (a%i==0){
			if (i*i!=a){
				if (b%i!=0){
					ans+=i;
				}
				if (b%(a/i) != 0) 
					ans += a/i;
			}
			else{
				if (b%i!=0) ans+=i;
			}
		}
	}
	cout<<ans;
}
int main(){
    FASTINPUT();
    inp();
    out();
}