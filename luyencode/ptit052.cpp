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
int csd, k;
void inp(){
	cin>>csd>>k;
}
void out(){
	int songay = 0, dsd = 0;
	songay += csd;
	while (csd >= k){
		dsd = csd%k;
		csd = (csd - dsd)/k;
		songay += csd;
		csd += dsd;
	}
	cout<<songay;
}
int main(){
    FASTINPUT();
    inp();
    out();
}