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
map<int , int> m;
queue<int> q;
void inp(){
	int n; cin>>n;
	for (int i = 0; i<n; i++)
		{int x;cin>>x;q.push(x);m[x]++;}
}
void out(){
	cout<<m.size()<<endl;
	while (!q.empty()){

		if (m[q.front()]!= 0){
			cout<<q.front()<<" "<<m[q.front()]<<endl;
			m[q.front()] = 0;
		}
		q.pop();
	}
}
int main(){
    FASTINPUT();
    inp();
    out();
}