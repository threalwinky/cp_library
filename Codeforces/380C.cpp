#include<iostream>
#include<string>
#include<cstring>
using namespace std;
const int MAX = 1e6+5, inf = 1e9;
struct Node {
    int optimal;
    int open;
    int close;
	Node(){};
    Node(int opt, int o, int c) {
        optimal = opt;
        open = o;
        close = c;
    }
};
Node operator + (const Node& left, const Node& right) {
    Node res;
    int tmp = min(left.open, right.close);
    res.optimal = left.optimal + right.optimal + tmp;
    res.open = left.open + right.open - tmp;
    res.close = left.close + right.close - tmp;
    return res;
}
void build(char a[], Node st[], int id, int l, int r){
	if (l == r){
		if (a[l - 1] == '(')
			st[id].open = 1;
		else st[id].close = 1;
		return;
	}
	int m = l + (r - l)/2;
	build(a,st,id*2, l, m);
	build(a,st,id*2+1, m+1, r);
	st[id] = st[id*2] + st[id*2+1];
}
Node query(Node st[], int id, int l, int r, int u, int v) {
    if (v < l || r < u) {
        return Node(0, 0, 0);
    }
    if (u <= l && r <= v) {
        return st[id];
	}
    int mid = (l + r) / 2;
    return query(st, id * 2, l, mid, u, v) + query(st, id * 2 + 1, mid+1, r, u, v);
}
Node st[MAX*4];
char a[MAX];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>a;
	int alen = strlen(a);
	build(a, st, 1, 1, alen);
	int n;
	cin>>n;
	while (n--){
		int l, r;
		cin>>l>>r;
		cout<<query(st,1,1,alen,l,r).optimal*2<<"\n";
	}
}