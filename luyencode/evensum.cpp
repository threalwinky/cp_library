#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
int total = 0;
void inp(){
	int T; cin>>T;
	if (T&1) T-=1;
	for (int i = 1; i <= T/2 ; i++){
		int x; int y;
		
		cin>>x>>y;
		total+=y;
	}
}
void out(){
	cout<<total;
}
int main(){
    freopen("evensum.inp", "r", stdin);
    inp();
    out();
}