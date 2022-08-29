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
string s;
void inp(){
	era();
	cin>>s;
}
void out(){
	for (int i = 0; i<s.length(); i++){
		if (!snt[i]) cout<<"*";
		else cout<<s[i];
	}
}
int main(){
    FASTINPUT();
    inp();
    out();
}