#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
int n;
void inp(){
	cin>>n;
}
string fill(string res){
	string temp;
	for (int i = 0; i<n-res.length(); i++){
		temp+='0';
	}
	temp+=res;
	return temp;
}
void out(){
	queue<string> bin;
	cout<<fill("0")<<endl;
	bin.push("1");
	for (int i = 1; i<(1<<n); i++){
		bin.push(bin.front()+'0');
		bin.push(bin.front()+'1');
		cout<<fill(bin.front())<<endl;
		bin.pop();
	}
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    inp();
    out();
}