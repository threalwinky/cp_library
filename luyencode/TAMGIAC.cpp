#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c;
	double p,s;
	cin>>a>>b>>c;
	if ((a+b<=c)||(b+c<=a)||(a+c<=b))
	cout<<"NO";
	else {
	p = a+b+c;
	cout<<p<<" ";
	p = p/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<fixed<<setprecision(2)<<s;
	}
}
