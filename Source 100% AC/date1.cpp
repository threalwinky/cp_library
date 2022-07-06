#include<bits/stdc++.h>
using namespace std;
#define NMAX 10001
void FASTINPUT(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
typedef long long ll;
typedef unsigned long long ull;
int n,y,a1[12] = {31,28,31,30,31,30,31,31,30,31,30,31},
a2[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
void inp(){
    cin>>n>>y;
    int temp = 0;
    if (y%400==0||(y%4==0&&y%100!=0)){
        while (n>a2[temp]){
            n-=a2[temp];
            temp++;
        }
    }
    else{
        while (n>a1[temp]){
            n-=a1[temp];
            temp++;
        }
    }
    cout<<n<<" "<<temp+1;
}
void out(){}
int main(){
    FASTINPUT();
    inp();
    out();
}