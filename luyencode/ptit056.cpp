#include<bits/stdc++.h>
using namespace std;
#define NMAX 100001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
bool snt[NMAX];
void era(){
	snt[0] = snt[1] = 1;
    for (int i = 2; i <= NMAX ;i++){
        if (!snt[i]) 
            for (int j = 2*i; j<=NMAX; j+=i){
                snt[j] = 1;
            }
    }
}
int l;
void inp(){
	cin>>l;
}
int tcs(int n){
	int temp = 0;
	while (n!=0){
		temp+=n%10;
		n/=10;
	}
	return temp;
}
void out(){
	era();
	if (!snt[tcs(l)] && !snt[l]) cout<<"YES";
	else cout<<"NO";
}
int main(){
    FASTINPUT();
    inp();
    out();
}