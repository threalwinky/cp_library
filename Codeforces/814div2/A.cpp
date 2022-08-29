#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while (T--){
		bool flag = 0;
		long long a, b;
		cin>>a>>b;
		a%=2;
		b%=2;
		cout<<((a == b) ? "Tonya\n" : "Burenka\n");
	}
}