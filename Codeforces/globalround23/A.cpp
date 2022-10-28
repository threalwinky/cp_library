#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while (T--){
		int n, k;
		cin>>n>>k;
		bool flag = 0;
		for (int i = 0; i<n; i++){
			int x;
			cin>>x;
			if (x == 1) flag = 1;
		}
		if (flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
