#include<bits/stdc++.h>
using namespace std;
template<class T> bool ckmin(T&a, const T&b) {return a > b ? a = b, 1 : 0;}
int main(){
    int a = 6;
    int b = 5;
    cout<<a<<" "<<b<<"\n";
    ckmin(a, b);
    cout<<a<<" "<<b;
}
