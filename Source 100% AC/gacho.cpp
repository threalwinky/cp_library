
#include<iostream>
using namespace std;
int main(){
    int sg, sc, tsc, tsch;
    cin>>tsc>>tsch;
    if (tsch & 1) cout<<-1;
    else {
        sg = (4*tsc - tsch)/2;
        sc = tsc - sg;
        if (sg < 0 || sc < 0) cout<<-1;
        else
        cout<<sg<<" "<<sc;
    }
}