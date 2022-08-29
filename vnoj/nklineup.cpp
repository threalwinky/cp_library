#include<iostream>
using namespace std;
const int MAX = 1e5, inf = 1e9;
int a[MAX];
pair <int, int> st[MAX*4];
void build(int id, int l, int r){
	if (l == r){
		st[id] = {a[l], a[l]};
		return;
	}
	int m = l + (r - l)/2;
	build(id*2, l , m);
	build(id*2+1, m+1, r);
	st[id].first = max(st[id*2].first, st[id*2+1].first);
	st[id].second = min(st[id*2].second, st[id*2+1].second);
}
pair<int, int> get(int id, int l, int r, int u, int v){
	if (l > v || r <u) return {-inf, inf};
	if (l >= u && r <= v){
		return st[id];
	}
	int m = l + (r-l)/2;
	pair<int, int> get1 = get(id*2, l, m, u, v);
	pair<int, int> get2 = get(id*2+1, m+1, r, u, v);
	return {max(get1.first, get2.first), min(get1.second, get2.second)};
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, q; cin>>n>>q;
	for (int i = 1; i <= n; i++){
		cin>>a[i];
	}
	build(1, 1, n);
	while (q--){
		int l, r;
		cin>>l>>r;
		pair<int, int> tmp = get(1, 1, n, l ,r);
		cout<<tmp.first - tmp.second<<"\n";
	}
}