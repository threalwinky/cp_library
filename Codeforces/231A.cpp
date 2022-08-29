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
void out(){
	int ans = 0;
	while (n--){
		int cnt;
		int x,y,z;
		cin>>x>>y>>z;
		if (x+y+z == 2 || x+y+z == 3) ans++;
	}
	cout<<ans;
}
int main(){
    FASTINPUT();
    
    inp();
    out();
}