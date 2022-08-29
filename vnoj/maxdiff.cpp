#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a[10001], ans = 0; cin>>n;
	for (int i = 0; i<n; i++){
		cin>>a[i];
	}
	for (int i = 0; i<n-2; i++){
		ans = max(ans, a[i+2] - a[i]);
	}
	cout<<ans;
}