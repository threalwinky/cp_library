#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arrx[4];
    int arry[4];
    for (int i = 0; i<4 ;i++){
        cin>>arrx[i]>>arry[i];
    }
    sort(arrx, arrx +4);
    sort(arry, arry +4);
    cout<<abs(arrx[1]-arrx[2])*abs(arry[1]-arry[2]);
}
