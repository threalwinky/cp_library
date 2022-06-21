#include <iostream>
#include <math.h>
using namespace std;
int checksnt(int x){
    if (x == 1) return 1;
    for (int  i = 2; i <= sqrt(x); i++)
    {
        if (x%i == 0) {
            return 1;
        }
    } return 0;
}
int checksdb2(int x){
    int s = 0;
    int a ;
    while (x > 10 ){
        a = x/10%10;
        if (a == 0) return 0;
        x/= 10;
    }return 1;
}
int checksdb(int x){
    int s = 0;
    if ((checksnt(x) == 0)&&(checksdb2(x) ==1)){
    while (x > 0){
        
        s += x%10;
        x /= 10;
        //if (x/10%10 == 0) return 1;
    }
    if (s % 2 ==0) return 0;
    else return 1;
    }else return 1;
}
int main(){
    int x ;
    cin>>x ;
    if (checksdb(x)==0) cout<<"YES";
    else cout<<"NO";
}
