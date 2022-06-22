#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
int n;
void inp(){
	cin>>n;
}
void out(){
	if (n == 0){
		cout<<1;
	}
	else {
		if (n%4==1){
			cout<<2;
		}
		else if (n%4==2){
			cout<<4;
		}
		else if (n%4==3){
			cout<<8;
		}
		else if (n%4==0){
			cout<<6;
		}
	}
}
int main(){
    cin.tie();                        
    ios_base::sync_with_stdio(false); 
    cout.tie(0);
    //freopen(".inp", "r", stdin);
    inp();
    out();
}