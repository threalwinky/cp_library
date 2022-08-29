#include<bits/stdc++.h>
using namespace std;
#define NMAX 10005
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
int n, k, a[NMAX], f[NMAX], maxx= INT_MIN;
void inp(){
	cin>>n>>k;
	for (int i = 1; i <= n ; i++){ cin>>a[i]; }
}
void out(){
	for (int i = 0; i <=n; i++) f[i] = INT_MIN;
	f[0] = 0;
	f[1] = a[1];
	for (int i = 1; i<=n; i++){
		for (int j = i-k; j < i; j++)
            if (j>=0)
			f[i] = max(f[i], f[j] + a[i]);
	}
	for (int i = 1; i<=n; i++)
		if (f[i] > maxx) maxx = f[i];
	cout<<maxx;
}
int main(){
    FASTINPUT();
    inp();
    out();
}