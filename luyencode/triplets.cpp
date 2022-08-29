#include<iostream>
using namespace std;
int main(){
    int a[3],b[3], total1 = 0, total2 = 0;
    for (int i = 0; i<3; i++) cin>>a[i];
    for (int i = 0; i<3; i++) cin>>b[i];
    for (int i = 0; i<3;i++) {
        if (a[i] > b[i]) total1 ++;
        if (a[i] < b[i]) total2 ++;
    }
    cout<<total1<<" "<<total2;
}