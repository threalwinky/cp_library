#include<iostream>
using namespace std;
int main(){

    int x ; cin>>x;
        if (x/3600>=10){
            cout<<x/3600<<":";

        }
        else cout<<"0"<<x/3600<<":";
        x%=3600;


        if (x/60>=10){
            cout<<x/60<<":";
        }
        else cout<<"0"<<x/60<<":";
        x%=60;

    if (x>=10){
            cout<<x;
        }
        else cout<<"0"<<x;
}
