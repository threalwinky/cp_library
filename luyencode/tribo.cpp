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
ll tribo[NMAX], n;
void tri(){
	tribo[0] = tribo[1] = 0;
	tribo[2] = 1;
	for (int i = 3; i<NMAX; i++){
		tribo[i] = tribo[i-1] + tribo[i-2] + tribo[i-3];
	}
}
int main(){
    
    tri();
    while (cin>>n){
    
    for (int i = 0; i<NMAX; i++){
		if (tribo[i] >= n){
			cout<<tribo[i]<<endl;
			break;
		}
		}
	}   
}