#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 3e5;
int ps[MAX], idx[MAX];
int LD(int x, int n){
	int l = 1, r = n;
	while (l <= r){
		int m = l + (r - l)/2;
		if (idx[m] <= x) l = m+1;
		else r = m - 1;
	}
	if (r >= n + 1|| r < 0) return -1; return r;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while (T--){
		int n, q;
		cin>>n>>q;
		ps[0] = 0;
		idx[0] = INT_MIN;
		for (int i = 1; i<=n; i++){
			int x;
			cin>>x;
			ps[i] = x + ps[i - 1];
			idx[i] = max(idx[i-1], x);
		}
		int ans;
		while (q--){
			int x;
			cin>>x;
			cout<<ps[LD(x, n)]<<" ";
		}
		cout<<"\n";
	}
}
