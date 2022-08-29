#include<iostream>
using namespace std;
int main(){
    int n,temp=0,x;
    long long s;
    cin>>n>>x;
    for (int i = 1; i <= n;i++){
    	cin>>s;
    	if (s == x) temp += 1;
	}
    cout<<temp;
}