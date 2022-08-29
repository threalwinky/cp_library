#include<bits/stdc++.h>
using namespace std;
int a[100];
long long l, r;
inline int len(long long n){ return to_string(n).length();}
int main(){
   
    a[1] = a[2] = 9;
    for (int i = 3; i<20; i+=2){
        a[i] = a[i-2] * 10;
        a[i+1]  = a[i];
    }
	while (cin>>l>>r){
		int a = len(l);
		int b = len(l);
		cout<<b - a;
    }
	
}