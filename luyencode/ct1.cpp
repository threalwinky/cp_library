#include<string>
#include <iostream>
using namespace std;
int main(){
    int n = 0,l = 0;
    string s;
    char temp[7];
    cin>>s;
    for (int i =0; i<s.length(); i++){l=0;
        for (int j = i; j<i+7;j++){
        	
            temp[0] = 's';
            temp[1] = 'p';
            temp[2] = 'e';
            temp[3] = 'c';
            temp[4] = 'i';
            temp[5] = 'a';
            temp[6] = 'l';
            for (int k =0; k<7 ;k++)
            if (s[j] ==  temp[k]) {
                temp[k] = '0';
                l++;
            }if (l == 7) n++;
        }
    }
    cout<<n;
}
