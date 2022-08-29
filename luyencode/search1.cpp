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
bool tk(int sct){
	int l = 0, r = n-1;
	while (r>=l){
		int m = (l+r)/2;
		if (a[m] == sct) return true;
		else if (a[m]>sct) r=m-1;
		else l = m+1;
	}
	return false;
}
void out(){
	int x;ad
	for (int i = 0; i < m ; i++){
		cin>>x;
		if (tk(x)) cout<<1;
		else cout<<0;
	}
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    inp();
    out();
}