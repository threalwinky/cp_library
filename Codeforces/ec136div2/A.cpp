#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while (T--){
		int n, m;
		cin>>n>>m;
		if (n == 1 || m == 1) cout<<n<<" "<<m;
		else cout<<ceil((double)n/2)<<" "<<ceil((double)m/2);
		cout<<"\n";
	}
}
