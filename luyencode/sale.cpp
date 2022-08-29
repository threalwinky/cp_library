#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, p, k;
    cin>>n>>k>>p;
	cout<<(n/(k+1)*(k+1) - n/(k+1))*p + n%(k+1)*p;
}