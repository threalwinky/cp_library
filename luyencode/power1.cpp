#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
#define MODULO 1000000007
#define FASTINPUT(); ios::sync_with_stdio(0);\
    cin.tie(0);\
    cout.tie(0);\
typedef long long ll;
typedef unsigned long long ull;
ull a, n;
void inp(){
	cin>>a>>n;
}
ull sqr(ull m){
	return m*m;
}
ull cdt(ull x, ull y){
	if (y == 0) return 1 % MODULO;
	else if (y&1) 
		return x*(sqr(cdt(x, y/2))%MODULO)%MODULO;
	else 
		return sqr(cdt(x, y/2))%MODULO;
}
void out(){
	cout<<cdt(a, n);
}
int main(){
    FASTINPUT();
    inp();
    out();
}