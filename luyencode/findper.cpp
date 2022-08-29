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
deque<int> dq;int n;
void inp(){
	 cin>>n;
	for (int i = 0; i<n/2; i++){
		int x, y;
		cin>>x>>y;
		dq.push_front(x);
		dq.push_back(y);	
	}
	if (n&1) {
		int x; cin>>x;
		dq.push_front(x);
	}
}
void out(){
	if (n&1)
	{
		while (!dq.empty()){
			cout<<dq.front()<<" ";
			dq.pop_front();
		}
	}
	else{
		while (!dq.empty()){
			cout<<dq.back()<<" ";
			dq.pop_back();
		}
	}
}
int main(){
    FASTINPUT();
    inp();
    out();
}