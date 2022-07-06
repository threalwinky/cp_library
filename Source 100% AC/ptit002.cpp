#include<iostream>
using namespace std;
int main(){
    long long a[1001][1001];
    for (int i = 0; i<3; i++)
        for (int j = 0; j <3; j++) cin>>a[i][j];
    long long cp = 0,cc = 0;
    cc = a[0][0]*a[1][1]*a[2][2]+a[0][2]*a[1][0]*a[2][1]+a[2][0]*a[0][1]*a[1][2];
    cp = a[0][2]*a[1][1]*a[2][0]+a[0][1]*a[1][0]*a[2][2]+a[2][1]*a[1][2]*a[0][0];
    cout<<cc-cp;
    
}