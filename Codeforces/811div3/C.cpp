#include<bits/stdc++.h>
using namespace std;
int power(int x, int y){
	int ans = 1;
	for (int i = 0; i<y; i++){
		ans*=x;
	}
	return ans;
}
int main(){
	int T; cin>>T;
	while (T--){
	int n, dem = 9, ans = 0;
	cin>>n;
	while (n > 0){
		if (n >= dem){
			ans += dem*power(10, 9 - dem);
			n-=dem;
		}
		else{
			ans += n*power(10, 9 - dem);
			n-=10;
		}
		dem--;
	}
	cout<<ans<<endl;
	}
}