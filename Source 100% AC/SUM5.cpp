#include<bits/stdc++.h>
using namespace std;
#define NMAX 100001
#define FASTINPUT(); ios::sync_with_stdio(0);\
    cin.tie(0);\
    cout.tie(0);\
typedef long long ll;
typedef unsigned long long ull;
int n; double a[NMAX];
void inp(){
	cin>>n;
}
void init(){
	a[1] = 1.0;
	for (int i = 2; i<NMAX; i++){
		a[i] = a[i-1] + 1.0/i;
	}
}
void out(){

	cout<<fixed<<setprecision(5)<<a[n]<<endl;
}
int main(){
    FASTINPUT();
    init();
   	int T; cin>>T;
    while (T--){
    inp();
    out();
    }
}