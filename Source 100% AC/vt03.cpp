#include<iostream>
using namespace std;
int main(){
    long long int n,temp=0;
    long long s;
    cin>>n;
    for (int i = 0; i < n;i++){
    	cin>>s;
    	if (s>temp) temp = i;
	}
    cout<<temp;
}
