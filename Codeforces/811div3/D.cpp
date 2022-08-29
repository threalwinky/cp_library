#include<iostream>
using namespace std;
long long C(long long n, long long k, long long m){
    k = min(k, n - k);
    long long res = 1;
    for (int i = 1; i <= k;i++){
        res *= (n-i+1);
        res/=i;
		//res%=m;
    }
    return res;
}
int main(){
	long long n,m,k;
	cin>>k>>n;
    m = 1e9+7;
	cout<<C(n, k ,m);
}