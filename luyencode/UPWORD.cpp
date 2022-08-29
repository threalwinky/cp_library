#include<iostream>
using namespace std;
int main(){
    int temp = 0;
    string s;
    getline(cin,s);
    for (int i = 0; i<s.length();i++){
        if (int(s[i])>=65 &&int(s[i])<=90)
            if (int(s[i+1])<65 ||int(s[i+1])>97)
            temp++;
    }
    cout<<temp;
}



#include<iostream>

using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
string s;
cin>>s;
s+='@';
int n=s.length(),res=0,check=0;
for(int i=0;i<n;i++){
if(s[i]>='A'&&s[i]<='Z'){
if(!check){
check=1;
}
else{
continue;
}
}
else{
if(check){
res++;
check=0;
}
else{
continue;
}
}
}
cout<<res;
return 0;
}


