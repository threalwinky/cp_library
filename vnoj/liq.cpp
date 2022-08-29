#include<iostream>
using namespace std;
int F[10001], a[10001], n, ans = 0;
int main(){
	cin>>n;
	for (int i = 1; i <= n; i++) 
		cin>>a[i];
	for (int i = 1; i <=n ; i++){
		for (int j = 0; j<i; j++)
			if (a[i] > a[j]){
				F[i] = max(F[i], F[j] + 1);
				ans = max(ans, F[i]);
			}
	}
	cout<<ans;
}
