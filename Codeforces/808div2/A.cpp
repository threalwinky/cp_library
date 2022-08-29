#include<iostream>
using namespace std;
int main(){
	int T; cin>>T;
	while (T--){
		int n, a[1001]; cin>>n;
		for (int i = 0; i<n; i++) cin>>a[i];
		bool check = 0;
		for (int i = n-1; i>=1; i--){
			while (a[i] > 0){
				a[i] = a[i] - a[i-1];
			}
			if (a[i] < 0) {
				check = 1;
				break;
			}
		}
		if (check) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}