#include<math.h>
#include<iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
	int n, w, h;
	cin>>n>>w>>h;
	long double cheo = 0, x;

	cheo = sqrt(w*w + h*h);
	for (int i = 0; i<n; i++){
		cin>>x;
		if (x <= cheo) cout<<"DA\n";
		else cout<<"NE\n";
	}
}