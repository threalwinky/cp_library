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
int n, f[NMAX];
map<int, int> m;
void tinhth(){
	f[2] = 1;
	for (int i = 3; i<100000; i++) f[i] = f[i-1]+i-1;
}
int total = 0;
void inp(){
	int n;cin>>n;
	for (int i = 0; i < n ; i++){
		int x; cin>>x; m[x]++;
	}
}
void out(){
	for (auto x:m){
		if (x.second > 1) total+=f[x.second];
	}
	cout<<total;
}
int main(){
    FASTINPUT();
    tinhth();
    inp();
    out();
}