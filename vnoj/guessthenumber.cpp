#include<iostream>
using namespace std;
int main(){
	int l = 0, r = 1e6;
	while (l < r){
		int m = (l+r)/2;
		cout<<m<<endl<<flush;
		string s;
		cin>>s;
		if (s == "<") r=m-1;
		else l = m;
	}
	cout<<"!"<<l;
}