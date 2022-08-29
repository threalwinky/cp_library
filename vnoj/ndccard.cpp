#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m, a[100001];
	cin>>n>>m;
	int ans = 0;
	for (int i = 0; i<n; i++) cin>>a[i];
	sort(a, a+n);
	
	
	for (int i = 0; i<n-2; i++){
		int j = i+1, k = n-1;
		while (j < k){
			if (a[i] + a[j] +a[k] <=m) ans = max(ans ,a[i] + a[j] +a[k]);
			if (a[j]+ a[k] > m - a[i]) k--;
			else j++;
		}
	}
	cout<<ans;
}