#include<iostream>
using namespace std;
const int MAX = 3e5 + 5;

inline int max(int a, int b){return ((a>b)?a:b);}
int LowerBound(int a[], int l, int r, int x){
	while (l <= r){
		int m = l + (r - l)/2;
		if (a[m] < x) l = m + 1;
		else r = m - 1;
	}
	return l;
}
int a[MAX], F[MAX], n;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for (int i = 1; i<n;i++){
		F[i] = 1e9;
	}
	F[0] = -1e9;
	int ans = 0;
	for (int i = 0; i<n;i++){
		cin>>a[i];
		int k = LowerBound(F, 0, n, a[i]);
		F[k] = a[i];
		ans = max(ans, k);
	}
	cout<<ans;
}