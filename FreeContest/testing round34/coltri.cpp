#include<iostream>
using namespace std;
//declare variables
bool snt[1000005];
long long F[1000005], T;
//erathothenes function
void era(){
	snt[0] = snt[1] = 1;
	for (int i = 2; i<=1000004; i++){
		
		for (int j = 2*i; j <= 1000004; j+=i){

			snt[j] = 1;
		
		}

	}
}
long long C(long long n, long long k){
    if (k > n) return 0;
    k = min(k, n - k);
    long long res = 1;
    for (int i = 1; i <= k;i++){
        res *= (n-i+1);
        res/=i;
    }
    return res;
}

int main(){
	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
	era();
	F[0] = 0;
	for (int i = 1; i<1000000; i++){
		if (!snt[i])
		F[i] = F[i-1]+1;
		else F[i] = F[i-1];
	}
	cin>>T;
	while (T--){
	
		int x, temp1 = 0, temp2 = 0;
		cin>>x;
		for (int i =1; i<=x-1; i++){
			for (int j = 1; j<=x && j!=i; j++)

			if (!snt[i+j])temp1++;
			else temp2++;
			
		}
		cout<<C(temp1, 3)+C(temp2, 3)<<endl;

	}	
}