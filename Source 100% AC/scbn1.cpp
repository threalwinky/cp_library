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
int n;
void inp(){
	cin>>n;
}
void out(){
	int x, y = INT_MIN, temp = 0;
	for (int i = 0; i<n; i++){
		int x; cin>>x;
		if (x == y) temp ++;
		y = x;
	}
	cout<<temp;
}
int main(){
    FASTINPUT();
    inp();
    out();
}