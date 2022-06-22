#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
queue<int> q;
void inp(){
	int x;
	cin>>x;
	if (x == 1){
		int y; cin>>y;
		q.push(y);
	}
	else if(x == 2){
		if (!q.empty())
		q.pop();
	}
	else if(x==3){
		if (q.empty()){
			cout<<"Empty!"<<endl;
		}
		else cout<<q.front()<<endl;
	}
}
int main(){
    int T; cin>>T;
    while (T--){
    inp();
    }
}