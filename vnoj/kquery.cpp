#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;
const int MAX = 3e4 + 8, inf = 1e9;
vector<int> st[MAX];
int a[MAX], n, q;
vector<int> merge2vec(vector<int> b, vector<int> c){
	vector<int> a;
	int bl = b.size(), cl = c.size(), i = 0, j = 0;
	while (i < bl || j < cl){
		if ((b[i] < c[j] && i < bl && j < cl) || (j >= cl)){
			a.push_back(b[i++]);
		}
		else a.push_back(c[j++]);
	}
	return a;
}
void build(int id, int l, int r) {
    if (l == r) {
        st[id].push_back(a[l]);
        return ;
    }
    int mid = (l + r) / 2;
    build(id*2, l, mid);
    build(id*2+1, mid+1, r);
	st[id] = merge2vec(st[id*2], st[id*2+1]);
}
int get(int id, int l, int r, int u, int v, int k) {
    if (v < l || r < u) {
        return 0;
    }
    if (u <= l && r <= v) {
        return st[id].size() - (upper_bound(st[id].begin(), st[id].end(), k) - st[id].begin());
    }
    int mid = (l + r) / 2;
    return get(id*2, l, mid, u, v, k) + get(id*2+1, mid+1, r, u, v, k);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for (int i = 1; i<= n; i++){
		cin>>a[i];
	}
	build(1, 1, n);
	cin>>q;
	while (q--){
		int l, r, k;
		cin>>l>>r>>k;
		cout<<get(1, 1, n, l, r, k)<<"\n";
	}
}