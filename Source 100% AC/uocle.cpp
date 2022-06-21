#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
int n;
void out(){
	int a = n;
	if (!(n&1)){
		while (n!=1){
			n/=2;
			if (a%n==0 && n&1) {
				cout<<n<<endl;
				break;
			}
		}
	}
	else{
		for (int i = 3; i<=sqrt(n); i++){
			if (n%i==0)
			{

				cout<<n/i<<endl;
				n/=i;
				break;
			}
		}
		if (n==a) cout<<1<<endl;
	}
}
void inp(){
	int T;cin>>T;
	for (int i = 0; i < T ; i++){
		cin>>n;
		out();
	}
}
int main(){
    freopen("uocle.inp", "r", stdin);
    inp();
}