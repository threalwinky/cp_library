#include<bits/stdc++.h>
using namespace std;
long db(long n){
	
	if (n == 1) return 1;
	return n*n + db(n-1);
}
int main()
{
	int n;cin>>n;
	cout<<db(n)<<endl;
}
