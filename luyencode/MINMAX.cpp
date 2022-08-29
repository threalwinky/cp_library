#include<iostream>
using namespace std;
int main(){
    int n, max = -1231231, min = 1231312, maxvt,minvt,temp=1,x; cin>>n;
    for (int i = 0 ; i<n;i++){
        cin>>x;
        if (x>max) {
            max = x;
            maxvt = temp;
        }
        if (x<min){
            min = x;
            minvt = temp;
        }
        temp++;
    }
    cout<<min<<" "<<minvt<<" "<<max<<" "<<maxvt;
}
