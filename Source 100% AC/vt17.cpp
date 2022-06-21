#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c,d,e,f,x,y;
	cin>>a>>b>>c>>d>>e>>f;
	if (a/b == d/e)
		if (a/b == c/f) cout<<"VOSONGHIEM";
		else cout<<"VONGHIEM"; 
	else {
	x = (c*e-b*f)/(a*e-b*d);
	y = (c-a*x)/b;
	cout << setprecision(2) << fixed  << (float)x<<" "<<float(y) << endl;
	}
}
