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

int l, r, f[NMAX];
void ps(){
	f[0] = f[1] = 1;
	for (int i = 2; i<NMAX; i++){
		if (!snt[i]) f[i] = f[i-1] + 1;
		else f[i] = f[i-1];
	}
}
void inp(){
	
	cin>>l>>r;
}
void out(){
	cout<<f[r] - f[l-1]<<endl;
}
int main(){
    FASTINPUT();
    era();
    ps();
    int T; cin>>T;
    while (T--){
    inp();
    out();
	}
}