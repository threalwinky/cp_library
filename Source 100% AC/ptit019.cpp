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
int a, b, c;vector<int> v;
void inp(){
	cin>>a>>b>>c;
	
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(), v.end(), greater<int>());
}
void out(){
	for (auto x:v) cout<<x<<" ";
}
int main(){
    FASTINPUT();
    inp();
    out();
}