#include<bits/stdc++.h>
using namespace std;
bool prime(unsigned int n){
    if ( n < 2){
        return false;
    }
        for (unsigned int i = 2; i <= sqrt(n); i++){
            if ( n % i == 0){
                return false;
            }
        }
    return true;
}
int main(){
	int n,s = 0,temp = 0;
	cin>>n;int m = n,z = n;
	for (int i = 2 ;i<m; i++){
		s = 0;
		if (prime(i) == 1){
			if (n%i == 0){
			while (n%i == 0){
				n/=i;
				s+=1;
			}
			temp++;
			}
			
		}
	};
	cout<<temp<<endl;
	for (int i = 2 ;i<m; i++){
		s = 0;
		if (prime(i) == 1){
			if (z%i == 0){
			while (z%i == 0){
				z/=i;
				s+=1;
			}
			cout<<i<<" "<<s<<endl;
			}
			temp++;
		}
	}
}
