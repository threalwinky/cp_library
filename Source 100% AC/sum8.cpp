#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
#define FASTINPUT(); ios::sync_with_stdio(0);\
    cin.tie(0);\
    cout.tie(0);\
typedef long long ll;
typedef unsigned long long ull;
int n;
void inp(){
	cin>>n;
}
double sol(int a){

	double kq = 0.0;
	for (int i = a; i>=0; i--){
		kq = sqrt(kq) + i;
	}
	return kq;
}
void out(){
	cout<<fixed<<setprecision(5)<<sol(n)<<endl;
}
int main(){
    FASTINPUT();
   	int T; cin>>T;
    while (T--){
    inp();
    out();
    }
}