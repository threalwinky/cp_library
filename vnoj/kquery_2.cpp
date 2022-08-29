#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int MAX = 1e5;
int st[MAX*4];
struct query{
	int l, r, k;
};
bool operator < (query a, query b){
	return a.k < b.k;
}
void build(int id, int l, int r) {
    if (l == r) {
        st[id] = 1;
        return ;
    }
    int mid = (l + r) / 2;
    build(id * 2, l, mid);
    build(id * 2, mid+1, r);
    st[id] = st[id*2] + st[id*2+1];
}
void update(int id, int l, int r, int u) {
    if (u < l || r < u) return ;
    if (l == r) {
        st[id] = 0;
        return ;
    }
    int mid = (l + r) / 2;
    update(id*2, l, mid, u);
    update(id*2 + 1, mid+1, r, u);
    st[id] = st[id*2] + st[id*2+1];
}
int get(int id, int l, int r, int u, int v) {
    if (v < l || r < u) return 0;
    if (u <= l && r <= v) return st[id];
    int mid = (l + r) / 2;
    return get(id*2, l, mid, u, v) + get(id*2+1, mid+1, r, u, v);
}
vector<query> qr;
pair<int, int> id[MAX]; 
int a[MAX];
int main(){
	int n, q;
	cin>>n;
	for (int i = 1; i <= n; i++){
		cin>>a[i];
		id[i].first = a[i];
		id[i].second = i;
	}
	cin>>q;
	for (int i = 0; i<q; i++){
		query tmp;
		cin>>tmp.l>>tmp.r>>tmp.k;
		qr.push_back(tmp);
	}
	sort(qr.begin(), qr.end());
	sort(id, id+n);
	build(1, 1, n);
	int i = 1;
	for(query q : qr) {
    while (a[id[i].second] <= q.k && i <=n ) {
        id[i].second = 0;
        update(1, 1, n, id[i].second);
        ++i;
    }
	cout<<get(1, 1, n, q.l, q.r);
	}
}