#include<bits/stdc++.h>
using namespace std;
//declare variables
int n, m, a[100001], pf[100001];

int main(){
	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
	//input
	cin>>n>>m;
	for (int i = 1; i<=n; i++){
		cin>>a[i];
	}

	for (int i = 0; i<m; i++){
		
		bool flag1 = 0, flag2 = 0;
		int l, r;
		cin>>l>>r;
		if (r - l < 2) cout<<"Yes\n";

		else{
			for (int j = l; j<=r - 1; j++){
				if (a[j] >= a[j  + 1]){
					flag1 = 1;
				}
				if (flag1 && a[j] < a[j + 1]){
					flag2 = 1;
					break;
				}
			}

			if (flag2) cout<<"No\n";
			else cout<<"Yes\n";
			
		}
		
		
	}
}