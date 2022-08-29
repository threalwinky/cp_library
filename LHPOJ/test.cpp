#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7, MAX = 3e6;
class EulerTotient{
	public :
		vector<int> phi = vector<int>(MAX + 10);
		int getphi(int n){
			double ans = n;
			for(int p = 2; p * p <= n; ++p){
				if (n % p == 0){
					while (!(n%p))
						n /= p;
						ans *= (1.0 - (1.0 / (double)p));
					}
			}
			ans *=((n>1) ? (1.0 - (1.0 / (double)n)) : 1);
			return (int)ans;
		}
		void sieve(){
			phi[0] = 0;
			phi[1] = 1;
			for (int i = 2; i <= MAX; i++)
				phi[i] = i - 1;
			for (int i = 2; i <= MAX; i++)
				for (int j = 2 * i; j <= MAX; j += i)
					phi[j] -= phi[i];
		}
};
class Solution : public EulerTotient{
	public : 
		inline void FIO()
		{cin.tie(0) -> ios::sync_with_stdio(false);}
	private :
	//declare variable;
	int n;
	long long ans = 0;
	public :
	//handle
		void input(){
			cin>>n;
			ans = 0;
		}
		void solve();
		void output(){
			cout<<ans<<"\n";
		}
};
void Solution::solve(){
	for (int i = 2; i<=n; i++){
		ans += phi[i] % MOD;
	}
}
main(){
	Solution sol;
	sol.FIO();
	sol.sieve();
	int T;
	cin>>T;
	while (T--){
		sol.input();
		sol.solve();
		sol.output();
	}
}