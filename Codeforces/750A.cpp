#include<iostream>
using namespace std;
int main(){
	int n, k, m, F[100], ans = 0;
	F[0] = 0;
	cin>>n>>k;
	m = 240 - k;
	for (int i = 1; i<=n; i++){
		F[i] = F[i-1] + 5*i;
	}
	for (int i = 0; i<=n; i++){
		if (m >= F[i]) ans = i;
	}
	cout<<ans;
}