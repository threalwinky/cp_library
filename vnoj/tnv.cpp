#include <bits/stdc++.h>
using namespace std;
const int inf  = 1e9 + 7;
const int maxN = 1000005;
int n, q;
int a[maxN];
int *st[4 * maxN];
int *minptr(int *a, int *b){
	return (*a < *b) ? a: b;
}
void build(int id, int l, int r) {
    if (l == r) {
        st[id] = &a[l];
        return;
    }
    int mid = l + r >> 1;
    build(2 * id, l, mid);
    build(2 * id + 1, mid + 1, r);
    st[id] = minptr(st[2 * id], st[2 * id + 1]);
}
void update1(int id, int l, int r, int i, int val) {
    if (l > i || r < i) return;
    if (l == r) {
        *st[id] = val;
        return;
	}
    int mid = l + r >> 1; 
    update1(2 * id, l, mid, i, val);
    update1(2 * id + 1, mid + 1, r, i, val);
    st[id] = minptr(st[2 * id], st[2 * id + 1]);
}
void update2(int id, int l, int r, int val) {
    if (l == r && *st[id] < val) {
        *st[id] = val;
        return;
    }
	if (*st[id] < val){
    int mid = l + r >> 1;
    update2(2 * id, l, mid, val);
    update2(2 * id + 1, mid + 1, r, val);
    st[id] = minptr(st[2 * id], st[2 * id + 1]);
	}
}
int main() {
	//freopen("tnv_test.inp", "r", stdin);
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    while (q--) {
        int type, x, y;
        cin >> type;
        if (type == 1){ 
			cin>>x>>y;
			update1(1, 1, n, x, y);
		}
		else{
			cin>>x;
			update2(1,1,n,x);
		}
    }
	for (int i = 1; i<=n;i++)
		cout << a[i] << ' ';
}