#include<iostream>
#include<cstring>
#include<vector>
#include<limits.h>
using namespace std;
long long n, m, ans[100002], tmp;
bool visited[100002];
vector<pair<int, int>> v[100002];
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
			ans[tmp] += it.second;
			dfs(it.first);
		}
	}
}

void out(){
	long long MIN = INT_MAX;
	memset(ans, 0, 100001*4);
	for (int i = 1; i <=n; i++){
		tmp = i;
		memset(visited, 0, 100001);
		dfs(i);
		MIN = min(MIN, ans[i]);
	}
	for (int i = 1; i<=n; i++){
		if (ans[i] > MIN) cout<<0;
		else cout<<1;
	}
}

int main(){
	inp();
	out();
}