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
map<ll, ll> m;
void init(){
	for (ll i = 0; i<=10000; i++){
		m[i*4]++;
		m[i*7]++;
		m[i*11]++;
	}
}
ll l, r;
void inp(){
	cin>>l>>r;
}
void out(){
	int dem = 0;
	for (int i = l; i<=r; i++){
		if (m[i] != 0) dem++;
	}
	cout<<dem<<endl;
}
int main(){
    FASTINPUT();
   	int T; cin>>T;
   	init();
    while (T--){
    inp();
    out();
    }
}