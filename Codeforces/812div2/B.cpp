#include<iostream>
using namespace std;
int n,a[100005];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while (T--){

	bool flag = 0;
	cin>>n;
	int MIN = 1e9;
	for (int i = 0; i<n; i++){
		cin>>a[i];
		MIN = min(MIN, a[i]);
	}
	for (int i = 0; i<n; i++){
		a[i]-=MIN;
	}
	int tmp = 0;
	int i = 0;
	while (true){
		bool flag = 0;
		while (a[i] > 0){
			i++;
			flag = 1;
		}
		if (flag) tmp++;
		else
		i++;
		if (i >= n) break;
	}
	if (tmp >= 2) cout<<"NO\n";
	else cout<<"YES\n";
	}
}