#include<iostream>
using namespace std;
const int MAX = 1e5;
long long a[MAX], n, k, ans = 0, sum = 0;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
	cin>>n>>k;
	for (int i = 0; i<k;i++){
		cin>>a[i];
		sum+=a[i];
	}
	ans = max(ans, sum);
	for (int i = k; i<n;i++){
		cin>>a[i];
		sum+=a[i];
		sum-=a[i - k];
		ans = max(ans, sum);
	}
	cout<<ans;
}