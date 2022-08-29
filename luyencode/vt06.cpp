#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp=0;
	int sum = 0,s;
	
    cin>>n;
    for (int i = 1; i <= n;i++){
    	cin>>s;
    	if (s%2!=0){
		temp += 1;
		sum += s;
		};
	};
	cout<<setprecision(4)<<fixed<<(float)sum/temp;
}
