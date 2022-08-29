#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	freopen("test.inp", "w", stdout);
	int n = 100;
	cout<<n<<endl;
	srand(time(NULL)); 
	for (int i = 0; i<n; i++){
		int res = (rand() % (10000000 - 2 + 1) + 2) * (100) + rand()% (1000 + 2);
		cout<<res<<" ";
	}
}