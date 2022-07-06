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
queue<int> q;
int n, k;
void inp(){
	cin>>n>>k;
	for (int i = 0; i<n; i++){int x; cin>>x; q.push(x);}
}
void out(){
	for (int i = 0; i<k%n; i++){
		int x = q.front();
		q.pop();
		q.push(x);
	}
	while (!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
}
int main(){
    FASTINPUT();
    inp();
    out();
}