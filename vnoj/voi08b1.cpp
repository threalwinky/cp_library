#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n, a[100001], b[100001];
	cin>>n;
	for (int i = 0; i<n; i++){
		cin>>a[i];
	}
	for (int i = 0; i<n; i++){
		cin>>b[i];
	}
	sort(a, a+n);
	sort(b, b+n);

	int i = 0;
	int j = n - 1;
	long long ans = INT_MAX;
	while (i < n && j >= 0){
		ans = min(ans, abs(a[i] + b[j]));
		if (a[i] + b[j] < 0) i++;
		else j--;
	}
	cout<<ans;
}