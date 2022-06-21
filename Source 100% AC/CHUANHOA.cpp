#include<iostream>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    string s;cin.ignore();
    for (int i = 0; i<n; i++){
        getline(cin,s);
        while (int(s[0]) == 32)
                s.erase(0,1);
        for (int j =0; j<s.length();j++){
            while (int(s[j]) == 32&&int(s[j+1]) == 32)
                s.erase(j+1,1);
        }
        if (int(s[s.length()-1]) == 32)
                s.erase(s.length()-1,1);
        cout<<s<<endl;
    }
}
