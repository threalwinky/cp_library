#include<iostream>
using namespace std;
#define int long long 
const int MAX = 2000000;
int ar[MAX], br[MAX], cr[MAX];
int pow(int a, int b){
	int tmp = 1;
	for (int i = 0; i<b; i++) tmp*= a;
	return tmp;
}
signed main(){
	int a, b, c, tmp = 1;
	cin>>a>>b>>c;
	for (int i = 2; i < 1000000; i++){
		while (a % i == 0){
			ar[i] ++;
			a/=i;
		}
		while (b % i == 0){
			br[i] ++;
			b/=i;
		}
		while (c % i == 0){
			cr[i] ++;
			c/=i;
		}
		if (max(max(ar[i], br[i]), cr[i]) % 2 == 1)
			tmp *= pow(i, (max(max(ar[i], br[i]), cr[i])/2 + 1));
		else if (max(max(ar[i], br[i]), cr[i]) > 0)

			tmp *= pow(i, (max(max(ar[i], br[i]), cr[i])/2));
	}
	cout<<tmp;
}
