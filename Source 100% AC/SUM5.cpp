#include<bits/stdc++.h>
using namespace std;
long double db(long double n){
	
	if (n == 1) return 1;
	return 1/n + db(n-1);
}
int main(){
	int n;cin>>n;
	long double s;
	for (int i = 0; i< n;i++){
	cin>>s;
	cout<<setprecision(5)<<fixed<<db(s)<<endl;
	}
}
