#include<bits/stdc++.h>
using namespace std;
double sum(float n){
	if (n==1) return 0.5;
	return 1/(n*(n+1)) + sum(n-1);
}
int main() {
	float n;
	cin>>n;
	cout<<fixed<<setprecision(5)<<sum(n);
}
