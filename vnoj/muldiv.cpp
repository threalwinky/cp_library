#include<iostream>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
const int MAX = 1e7, MOD = 998244353;
int pn[MAX];
vector<int> v;
void sieve(){
	pn[1] = 1;
	for (int i=2; i<MAX; i++)
		pn[i] = i;
	for (int i=4; i<MAX; i+=2)
		pn[i] = 2;
	for (int i=3; i*i<MAX; i++){
		if (pn[i] == i){
			for (int j=i*i; j<MAX; j+=i)
				if (pn[j]==j) pn[j] = i;
		}
	}
}
int divnum(int n){
	int ans = 1;
	map<int, int> m;
	while (n != 1){
		m[pn[n]] ++;
		n /= pn[n];
	}
	for (auto x:m){
		ans *= (x.second+1);
	}
	return ans;
}
long long powmod(int a, int b){
	if (b == 0) return 1;
	if (b&1) return (powmod(a, b/2)%MOD * powmod(a, b/2)%MOD * a%MOD)%MOD;
	return (powmod(a, b/2)%MOD * powmod(a, b/2)%MOD)%MOD;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	sieve();
	int T;
	cin>>T;
	while (T--){
		int n, tmp; cin>>n;
		tmp = divnum(n);
		if (tmp&1) cout<<(powmod(n, tmp/2)%MOD*(int)sqrt(n)%MOD)%MOD;
		else cout<<powmod(n, tmp/2)%MOD;
		//cout<<tmp;
		cout<<"\n";
	}
}