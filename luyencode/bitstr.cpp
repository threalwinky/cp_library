#include<iostream>
#include<string>
#include<queue>
using namespace std;
int n, k;
string fill(string s){
    string temp;
    if (s.length() > k) return s;
    for (int i = 0; i< k - s.length() ; i++){
        temp += '0';
    }
    temp += s;
    return temp;
}
int main(){
    cin>>n>>k;
    string s = "111";
    cout<<fill(s);
}