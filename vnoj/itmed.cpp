#include<iostream>
using namespace std;
#define int long long
const int MAX = 1e5 + 5, inf = 1e9;
void build(int a[], int st[], int id, int l, int r){
	if (l == r) {
		st[id] = a[l];
		return;
	}
	int m = l + (r-l)/2;
	build(a, st, id*2, l, m);
	build(a, st, id*2+1, m+1, r);
	st[id] = max(st[id*2], st[id*2+1]);
}
int get(int st[], int id, int l, int r, int u, int v){
	if (l > v || r < u) return -inf;
	if (l >= u && r <= v){
		return st[id];
	}
	int m = l + (r - l)/2;
	int get1 = get(st, id*2, l, m, u,v);
	int get2 = get(st, id*2+1, m+1, r, u,v);
	return max(get1, get2);
}
int a[MAX], st[4*MAX];
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, F[MAX], k, ans = 0;
	cin>>n>>k;
	for (int i = 0; i<n; i++){
		cin>>a[i];
	}
	build(a, st, 1, 1, n);
	for (int i = 1; i<=n - k; i++){
		F[i] = max(get(st, 1, 1, n, i+1, i+k), 0LL) + a[i];
		ans = max(ans, F[i]);
	}
	cout<<ans;
}