#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
int u[NMAX],n;
void inp(){
	u[0] = -1;
	u[1] = 3;
	for (int i = 2; i<100; i++){
		u[i] = 5*u[i-1]-6*u[i-2];
	}
	cin>>n;
}
void out(){
	cout<<u[n];
}
int main(){
    FASTINPUT();
    inp();
    out();
}