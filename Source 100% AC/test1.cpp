#include<iostream>
using namespace std;
int main(){
	string a, b,temp;
	cin>>a>>b;
	if (a.length()<b.length()) {
		temp = a;
		a = b;
		b = temp; 
	};
	//for (int i = 0;i<a.length()-b.length()-1;i++) cout<<a[i]<<endl;
	cout<<(int)a[2]-48;
	/*if ((int)b[0]-48 + (int)a[a.length()-b.length()]-48>=10)
			cout<<(int)a[a.length()-b.length()-1]+1;
			else cout<<(int)a[a.length()-b.length()-1];
	/*for (int i = 0;i<b.length();i++){
		if ((int)b[i+1]-48 + (int)a[i+a.length()-b.length()+1]-48>=10)
			cout<<((int)b[i]-48 + (int)a[i+a.length()-b.length()]+1)%10;
			else cout<<(int)b[i]-48 + (int)a[i+a.length()-b.length()];
	}*/
	
}
