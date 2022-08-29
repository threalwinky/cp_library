#include<iostream>
using namespace std;
const int MAX = 1e7;
bool pn[MAX];
void sieve(){
	pn[0] = pn[1] = 1;
	for (int i = 2; i<MAX; i++){
		if (!pn[i]){
			for (int j = 2*i; j<MAX; j+=i){
				pn[j] = 1;
			}
		}
	}
}
int n, k;
int prf[MAX];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	sieve();
	cin>>n>>k;
	for (int i = 1; i<=n; i++){
		if (!pn[i]) prf[i] = prf[i-1] + 1;
		else prf[i] = prf[i-1];
	}
	int ans = 0, i = 0, j = 0;
	while (j <= n+1){
		if (prf[j] - prf[i] < k) j++;
		else{
			//cout<<i<<" "<<j<<"\n";
			ans += n - j + 1;
			i++;
		}
	}
	cout<<ans;
}