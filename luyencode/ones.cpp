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
string s;
void inp(){
	cin>>s;
}
bool check(string s){
	if (s[s.length()-1] == s[s.length()-2]) return true;
	return false;
}
bool check1(string s){
	for (int i = 0; i<s.length()-1; i++){
		if (s[i] > s[i+1]) {
			return false;
			break;
		}
		return true;
	}
}
void out(){
	if (check(s)&&check1(s)) cout<<"YES";
	else cout<<"NO";
}
int main(){
    FASTINPUT();
    inp();
    out();
}

#include<iostream>
#include<stack>
using namespace std;
typedef unsigned long long ull;
ull n;
int main(){
    cin>>n;
    stack<ull> st;
    st.push(11);
    for (int i = 0; i<18; i++){
        ull x = st.top();
        st.push(x*10+1);
    }
    while (!st.empty()){
        n%=st.top();
        st.pop();
    }
    if (n == 0) cout<<"YES";
    else cout<<"NO";
}