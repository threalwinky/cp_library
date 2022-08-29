#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x,y = 1;
    cin>>x;
    for (int i = 1; i < x; i++)
        y += pow(10,i);
    cout<<y*y;
}
