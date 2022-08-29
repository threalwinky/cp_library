#include<iostream>
#include<map>
#include<queue>
#include<stack>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	stack<int> q;
	map<int, int> m;
	int n, k;
	cin>>n>>k;
	for (int i = 1; i<=n; i++){
		m[i] = 0;
	}
	while (k--){
		int x; cin>>x;
		q.push(x);
		m[x] = 1;
	}
	while (!q.empty()){
		if (m[q.top()] > 0){
		cout<<q.top()<<" ";
		m[q.top()] = -1;
		}q.pop();
	}
	for (int i = 1; i<=n; i++){
		if (m[i] == 0) cout<<i<<" ";
	}
}