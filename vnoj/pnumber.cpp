#include<iostream>
#include<math.h>
using namespace std;
const int MAX = 2e5+5;
bool pn[MAX];
void sang(int a){
	pn[0] = pn[1] = 1;
	for (int i = 2; i<=sqrt(a);i++){
		if (!pn[i])
			for (int j = i + i; j<=a;j+=i)
				pn[j] = 1;
	}
}
int main(){
	int l, r;
	cin>>l>>r;
	sang(r);
	for (int x = l; x <=r; x++)
		if (!pn[x]) cout<<x<<endl;
}