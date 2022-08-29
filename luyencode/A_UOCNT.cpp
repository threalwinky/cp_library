#include<bits/stdc++.h>
using namespace std;
#define n 10001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;

int era(int a){
	for (int i = 2; i<=a; i++){
		if (a%i ==0 )cout<<i<<" ";
	}
	return 0;
}
void inp(){ int m = 11111; cout<<era(m);}
void out(){}
int main(){
    FASTINPUT();
    inp();
    out();
}