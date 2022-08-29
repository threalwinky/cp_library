#include<iostream>
#include<map>
using namespace std;
unsigned long long thc2[100001], thc3[100001];
void tinhthc2(){
    thc2[0] = thc2[1] = 0;
    thc2[2] = 1;
    for (int i = 3; i<100000; i++){
        thc2[i] = thc2[i-1] + i-1;
    }
}
void tinhthc3(){
    thc3[0] = thc3[1] = thc3[2] = 0;
    thc3[3] = 1;
    for (int i = 4; i< 100000; i++){
        thc3[i] = thc3[i-1] + thc2[i-1];
    }
}
int main(){
	tinhthc2();
    tinhthc3();
    long long n;cin>>n;
    map<long long, int> m;
    for (int i = 0; i<n; i++){
        long long x;
        cin>>x;
        if (x>0) m[x]++;
    }
    long long total = 0;
    for (auto x:m){
        if (x.second >= 3)
        total += thc3[x.second];
    }
    cout<<total;
}