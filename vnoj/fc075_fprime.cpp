#include<iostream>
using namespace std;
bool snt[10000000];
void era(){
	snt[0] = snt[1] = 1;
    for (int i = 2; i <= 10000000 ;i++){
        if (!snt[i]) 
            for (int j = 2*i; j<=10000000; j+=i){
                snt[j] = 1;
            }
    }
}
int main(){
	era();
	int n; cin>>n;
	while (n--){
		int s;cin>>s;
		if (!snt[s]) 
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}