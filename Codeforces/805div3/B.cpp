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
void out(){
	int dem = 0;
	int i = 0;
	while (i < s.length()){
		string temp;
		while (true){
			if (temp.find(s[i]) == string::npos){
				temp+=s[i];
			}
			i++;
			if (((temp.length()==3) &&(temp.find(s[i]) == string::npos))|| i>=s.length() ) 
				break;
		}
		dem++;
	}
	cout<<dem<<endl;
}
int main(){
    FASTINPUT();
   	int T; cin>>T;
    while (T--){
    inp();
    out();
    }
}
