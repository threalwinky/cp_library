#include<iostream>
using namespace std;
int main(){
    int n,temp=0;
    long long s;
    cin>>n;
    for (int i = 1; i <= n;i++){
    	cin>>s;
    	if (s>temp) temp = s;
	}
    cout<<temp;
}
