#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll cnt(ll n, ll k){
	if (k % 2 == 0) {
	ll x = n / k, y = (n + (k / 2)) / k;
	return x * x * x + y * y * y;
	}
	ll x = n / k;
	return x * x * x;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, k;
	cin>>n>>k;
	cout << cnt(n, k);
}