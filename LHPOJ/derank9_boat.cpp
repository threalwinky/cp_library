#include<iostream>
#include<sstream>
#include<stack>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	stack<string> st;
	string word;
	while (ss>>word){
		st.push(word);
	}
	while (!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}