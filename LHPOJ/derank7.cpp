#include<iostream>
#include<sstream>
using namespace std;
int main(){
	string s;
	getline(cin , s);
	stringstream ss(s);
	string word;
	while (ss>>word){
		if ((word[0] >= 97 && word[0] <= 125) || (word[0] >= 65 && word[0] <= 91))
		cout<<word[0]<<" ";
	}
}