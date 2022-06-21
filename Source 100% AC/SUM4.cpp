#include<bits/stdc++.h>
using namespace std;
double db(double n){
	
	if (n == 1) return 1;
	return (double)(2/((n+1)*n)) + db(n-1);
}
int main(){
	int n;cin>>n;
	double s;
	for (int i = 0; i< n;i++){
	cin>>s;
	cout<<setprecision(8)<<fixed<<db(s)<<endl;
	}
}
