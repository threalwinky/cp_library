#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
#define FASTINPUT(); ios::sync_with_stdio(0);\
    cin.tie(0);\
    cout.tie(0);\
typedef long long ll;
typedef unsigned long long ull;
string s;
int temp1= 0;
void inp(){
	
	cin>>s;
}
bool is_num(char x){
	if (x>=48 && x<= 57) return 1;
	return 0;
}
ull stoiii(string n){
    ull temp = 0;
    ull temp1 = 1;
    for (int i = n.length()-1; i>=0 ; i--){
        temp += (n[i] - '0')*temp1;
        temp1*=10;
    }
    return temp;
}
void out(){
	vector<string> v;
	for (int i = 0; i<s.length();i++){
		int j = 1;
		string temp;
		if (is_num(s[i])){
			temp+=s[i];
			while (is_num(s[i+j])){
				temp+=s[i+j];
				j++;
			}
			v.push_back(temp);
		}
		i+=j-1;
	}
	cout<<v.size();
}
int main(){
    FASTINPUT();
    inp();
    out();
}