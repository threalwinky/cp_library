#include<iostream>
using namespace std;

int sol(int a, int b){
	int ans = 0;
	if (a < b) swap(a, b);
	while (a > b){
		a-=b;
		ans++;
		if (a < b) swap(a, b);
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T; cin>>T;
	while (T--){
	int a, b;
	cin>>a>>b;
	cout<<sol(a, b)<<endl;
	}
}