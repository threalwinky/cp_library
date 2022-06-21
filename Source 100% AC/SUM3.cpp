#include<bits/stdc++.h>
using namespace std;
double db(double n){
	
	if (n == 1) return 0.5;
	return 1/(n*(n+1)) + db(n-1);
}
int main(){
	int n;cin>>n;
	cout<<setprecision(5)<<fixed<<db(n)<<endl;
}

