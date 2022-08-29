#include<bits/stdc++.h>
using namespace std;
#define NMAX 1000001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
ll n, fred[NMAX], fblue[NMAX];
void inp(){
	cin>>n;
}
void out(){
	fblue[3] = 1;
	fred[3] = 8;
	int temp = 3;
	for (int i = 4; i<=n; i++){
		fblue[i] = fblue[i-1]+temp;
		fred[i] = fred[i-1] +4;
		temp+=2;
	}
	cout<<fred[n]<<" "<<fblue[n];
}
int main(){
    FASTINPUT();
    inp();
    out();
}