#include<bits/stdc++.h>
using namespace std;
#define NMAX 100001
int m,n,a[NMAX];
void inp(){
	cin>>n>>m;
	for (int i = 0; i < n ; i++){
		cin>>a[i];
	}
}
int tk(int sct){
	int l = 0, r = n-1;
	while (r>=l){
		int m = (l+r)/2;
		if (a[m] == sct) {
			while (a[m]==a[m-1]) m-=1;
			return m+1;
		}
		else if (a[m]>sct) r=m-1;
		else l = m+1;
	}
	return 0;
}
void out(){
	int x;
	for (int i = 0; i < m ; i++){
		cin>>x;
		cout<<tk(x)<<" ";
	}
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    inp();
    out();
}