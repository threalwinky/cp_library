#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int n, m, ans[100001];
bool visited[100001];
vector<pair<int, int>> v[100001];
void inp(){
	cin>>n>>m;
	for (int i = 1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		v[x].push_back({y, i});
		v[y].push_back({x, i});
	}
}

void dfs(int x){
	visited[x] = true;
	for (auto it:v[x]){
		if (!visited[it.first]){
			cout<<it.first<<" ";
			ans[x] += it.second;
			dfs(it.first);
		}
	}
}

void out(){
	memset(ans, 0, 100001*4);
	for (int i = 1; i <=n; i++){
		cout<<i<<" : ";
		memset(visited, 0, 100001);
		dfs(i);
		cout<<endl;
	}
	
}

int main(){
	inp();
	out();
}