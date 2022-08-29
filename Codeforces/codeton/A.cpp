#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;cin>>T;
	while (T--){
	bool flag = 0;
	int n, m;
	string a, b;
	cin>>n>>m>>a>>b;
	for (int i = m - 1; i>=1; i--){
		if (b[i] != a[i + n - m]){
			flag = 1;
			break;
		}
	}
	int cnt = 0;
	if (!flag){
		for (int i = 0; i<=n - m;i++){
			if (a[i] == b[0])
				cnt++;
		}
		if (cnt > 0) flag = 0;
		else flag = 1;
	}
	cout<<(flag ? "NO" : "YES")<<endl;
	}
}