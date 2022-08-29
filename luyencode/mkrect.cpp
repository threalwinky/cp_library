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
ll n;
map<ll, ll> m;
void inp(){
	cin>>n;
	for (ll i = 0; i<n; i++){
		ll x; cin>>x; m[x]++;
	}
}
void out(){
	ll slt1 = 0, slt2 = 0;

	for (auto x:m){
		if (x.first>slt1&&x.second>1) slt1 = x.first;
		
	}m[slt1]-=2;
	
	for (auto x:m){
		if (x.first>slt2&&x.second>1) slt2 = x.first;
		
	}m[slt2]-=2;
	cout<<slt1*slt2;
}
int main(){
    FASTINPUT();
    inp();
    out();
}