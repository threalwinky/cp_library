#include<bits/stdc++.h>
using namespace std;
const long double pi = 3.1415926535;
int main(){
	int n;
	cin>>n;
	long long int x[100],y[100],z[100],temp,temp1= 0;
	for (int i = 0; i<n; i++) cin>>x[i]>>y[i]>>z[i];
	for (int i = 0; i<n; i++){
	temp1 = 0;
	if (x[i]<=0 || y[i]<=0 ||z[i] <=0) temp1 = -1;
	temp = y[i] - x[i];
	long double angle = (float)(2*pi*(2*z[i])/(2*y[i]));
	long double AB = sqrt(temp*temp + y[i]*y[i]- 2*temp*y[i]*cos(angle));
	cout<<fixed<<setprecision(2)<< ((temp*temp - y[i]*y[i] +AB*AB)/(2*AB))<<endl;
	if (temp1 == -1) cout<<-1; 
	}
}
