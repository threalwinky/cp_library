#include<iostream>
using namespace std;
int main(){
    int x,y,temp = 0, n;
    cin>>x>>y;
    for (int i = x ; i<y;i++){
        n = i;
        while (n!=0){
            if (n%10 == 5) temp++;
            n = n/10;
        }
    }
    cout<<temp;
}
