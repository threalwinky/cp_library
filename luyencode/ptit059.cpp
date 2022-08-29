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
int n, x, a[NMAX];
void inp(){
	cin>>n;
	for (int i = 1; i<=n; i++) cin>>a[i];
	cin>>x;
}
void out(){
	bool check = 0;
	for (int i = 1; i<=n; i++){
		if (a[i] >= x){
			for (int j = n+1; j>i; j--)
				a[j] = a[j-1];
			a[i] = x;
			check = 1;
			break;
		}
	}
	if (!check) a[n+1] = x;
	for (int i = 1; i<=n+1; i++){ cout<<a[i]<<" ";}
}
int main(){
    FASTINPUT();
    inp();
    out();
}