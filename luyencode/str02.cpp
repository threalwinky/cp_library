#include<iostream>
#include<string.h>
using namespace std;
void chuanchu(string h){
    if (((int)h[0])>=97&& (((int)h[0])<=122))
    cout<<char((int)h[0]-32);
    else cout<<h[0];
    for (int i = 1; i< h.length();i++){
        if (((int)h[i-1] == 32) && (((int)h[i])>=97) && (((int)h[i])<=122)){
        cout<<char((int)h[i]-32);
        }
        else {
            if (((int)h[i] < 97) && ((int)h[i] >= 65)&& ((int)h[i-1] != 32)&&((int)h[i] != 32))
            cout<<(char)(int)(h[i] + 32);
            else cout<<h[i];

        }
    }
    cout<<endl;
}
int main(){
    int n; cin>>n;cin.ignore();
    string h;
    for (int i = 0; i<n; i++){
    getline(cin,h);
    chuanchu(h);
    }
}
