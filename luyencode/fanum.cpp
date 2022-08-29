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
int n, a[NMAX];
void inp(){
	cin>>n;
	for (int i = 0; i < n ; i++){
		int x; cin>>x; a[x]++;
	}
}
void out(){
	sort(a+1, a+n+1, greater<int>());
	
	int total = 0, i = 1;
	for (int i = 0; i <= NMAX ; i++){
		if ((a[i] == 1)) 
		total += a[i];
	}
	cout<<total;
}
int main(){
    FASTINPUT();
    inp();
    out();
}