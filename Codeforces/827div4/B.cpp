#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while (T--){
		map<int, int> m;
		int n;
		cin>>n;
		for (int i = 0; i<n; i++){
			int x;
			cin>>x;
			m[x]++;
		}
		bool flag = 0;
		for (auto x : m) if (x.second > 1) flag = 1;
		if (flag) cout<<"NO\n";
		else cout<<"YES\n";
	}
}
