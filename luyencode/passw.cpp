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
int minn(int a, int b){
	if (a<b) return a;
	else return b;
}
int maxx(int a, int b){
	if (a>b) return a;
	else return b;
}
void out(){
	int ans = minn(5, maxx(s.length()-5, 0));
	bool is_upper = 0, is_lower = 0, is_num = 0;
	for (int i = 0; i<s.length(); i++){
		if (s[i] >= 65 && s[i]<=90) is_upper = 1;
		if (s[i] >= 97 && s[i]<=122) is_lower = 1;
		if (s[i] >= 48 && s[i]<=57) is_num = 1;
	}
	int temp = is_upper+is_lower+is_num;
	if (temp == 3) ans += 5;
	else ans += temp;
	cout<<ans<<" ";
}
int main(){
    FASTINPUT();
   	int T; cin>>T;
    while (T--){
    inp();
    out();
    }
}