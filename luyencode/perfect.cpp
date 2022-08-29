#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
#define FASTINPUT(); ios::sync_with_stdio(0);\
    cin.tie(0);\
    cout.tie(0);\
typedef long long ll;
typedef unsigned long long ull;
int n, a[NMAX], b[NMAX];
void inp(){
	cin>>n;
	for (int i = 0; i <n ;i++){
		cin>>a[i];
	}
}
void out(){
	sort(a, a+n);
	
	for (int i = 0; i<n-1; i++) b[i] = a[i+1] - a[i];
	
	sort(b, b+n-1);
	cout<<b[0];
}
int main(){
    FASTINPUT();
    inp();
    out();
}