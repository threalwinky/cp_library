#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
#define FASTINPUT(); ios::sync_with_stdio(0);\
    cin.tie(0);\
    cout.tie(0);\
typedef long long ll;
typedef unsigned long long ull;
int n, k, a[NMAX];
void inp(){
	cin>>n>>k;
	for (int i = 0; i < n ; i++){
		cin>>a[i];
	}
}
void out(){
	int ans = 0;
	for (int i = 0; i < n ; i++){
		if (a[i]>=a[k-1] && a[i] != 0) ans++;
	}
	cout<<ans;
}
int main(){
    FASTINPUT();
    inp();
    out();
}