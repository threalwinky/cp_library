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
	int total = 0, even = 0, last_pos = 0;
	for (int i = 0; i < n ; i++){
		int x; cin>>x;
		total += x;
		if (!(x&1)) even += 1;
		if (x > 0) last_pos = x;
	}
	cout<<total<<" "<<even<<" "<<last_pos;
}
int main(){
    FASTINPUT();
    inp();
    out();
}