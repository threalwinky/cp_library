#include <bits/stdc++.h>
using namespace std;
int m,n,cnt;
vector<int> adj[1001], check[1001], vst;
bool visited[1001];
void nhap(){
	cin>>m>>n;
	for (int i = 1; i<=n; i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}
void bfs(int u){
	check[u].push_back(u);
	visited[u] = true;
	queue<int> q;
	q.push(u);
	while (!q.empty()){
		int v = q.front();
		q.pop();
		for (auto x : adj[v]){
			if (!visited[x]){
				check[u].push_back(x);
				visited[x] = true;
				q.push(x);
				cnt++;
			}
		}
	}
}
void xuly(){
	int cnt1 = 0;
	for (int i = 1;i<=m;i++){
	if (!visited[i]){
	bfs(i);
	vst.push_back(i);
	cnt1++;
	}
	
	}cout<<cnt1<<endl;
	for (auto x : vst){
		cnt = 0;
		for (auto y : check[x]){
			cnt++;
		}
		cout<<cnt;
		for (auto y : check[x]){
			cout<<" "<<y;
		}
		cout<<endl;
	}
}
void xuat(){
}
int main(){

	freopen("path.inp", "r", stdin);
	nhap();
	xuly();
	xuat();
}