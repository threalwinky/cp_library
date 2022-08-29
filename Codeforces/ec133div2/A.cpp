#include<iostream>
using namespace std;
int sol(int n){
	if (n == 0) return 0;
	if (n == 1) return 2;
	if (n % 3 ==0 )return n/3;
	return n/3+1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T; cin>>T;
	while (T--){
		int n; cin>>n;
		cout<<sol(n)<<"\n";
	}
}