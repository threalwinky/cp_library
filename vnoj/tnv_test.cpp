#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	freopen("tnv_test.inp", "w", stdout);
	int n = 1000000;
	cout<<n<<endl;
	srand(time(NULL)); 
	for (int i = 0; i<n; i++){
		int res = rand() % (50 - 2 + 1) + 2;
		cout<<res<<" ";
	}
}