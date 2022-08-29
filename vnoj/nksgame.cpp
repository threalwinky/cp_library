#include<iostream>
#include<algorithm>
using namespace std;
pair<int, int> BinarySearch(int b[], int l, int r, int k){
	while (l <= r){
		int m = l + (r - l)/2;
		if (b[m] > k) r = m - 1;
		else l = m + 1;
	}
	return {b[r], b[l]};
}
int a[(int)1e5], b[(int)1e5];
int n, ans = 1e9;
int main(){
	cin>>n;
	for (int i = 0; i<n; i++) cin>>a[i];
	for (int i = 0; i<n; i++) cin>>b[i];
	sort(b, b+n);
	for (int i = 0; i<n; i++){
		pair<int, int> tmp = BinarySearch(b, 0, n - 1, a[i]);
		ans = min(ans, abs(a[i] - tmp.first));
		ans = min(ans, abs(a[i] - tmp.second));
	}
	cout<<ans;
}