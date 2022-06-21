
#include<string>
using namespace std;
int check(int n, int k){
	int s = 1;
	while (n!=0){
		s *= n%10;
		n/=10;
		if (s > k){
		return false;
		break;
		}
	}; 
	return true;
}
int main()
{
	long long int n,k; int s = 0;cin>>n>>k;
	for (int i = 1; i<=n; i++) if (check(i,k) == 1) s+=1;
	cout<<s;
}
