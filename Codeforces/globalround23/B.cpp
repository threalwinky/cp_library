#include<bits/stdc++.h>
using namespace std;
int a[500000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while (T--){
		int n;
		cin>>n;
		for (int i = 0; i<n; i++){
			cin>>a[i];
		}
		int l = 0, r = n - 1, ans = 0;
		while (l <= r){
			if (a[l] == 1 && a[r] == 0){
				ans++;
				l++;
				r--;
			} 
			else if (a[l] == 1 && a[r] == 1) r--;
			else if (a[l] == 0 && a[r] == 0) l++;
			else{
				l++;
				r--;
			}
		}
		cout<<ans<<"\n";
	}
}
