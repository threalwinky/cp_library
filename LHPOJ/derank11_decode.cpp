#include<bits/stdc++.h>
using namespace std;
map<string, int> mp;
int main(){
	mp.insert({"--..", 1});
	mp.insert({"-.--", 2});
	mp.insert({"-..-", 3});
	mp.insert({".--", 4});
	mp.insert({"...-", 5});
	mp.insert({"..-", 6});
	mp.insert({"-", 7});
	mp.insert({"...", 8});
	mp.insert({".-.", 9});
	mp.insert({"--.-", 10});
	mp.insert({".--.",11});
	mp.insert({"---",12});
	mp.insert({"-.",13});
	mp.insert({"--",14});
	mp.insert({".-..",15});
	mp.insert({"-.-",16});
	mp.insert({".---",17});
	mp.insert({"..",18});
	mp.insert({"....",19});
	mp.insert({"--.",20});
	mp.insert({"..-.",21});
	mp.insert({".",22});
	mp.insert({"-..",23});
	mp.insert({"-.-.",24});
	mp.insert({"-...",25});
	mp.insert({".-",26});
	string s;
	getline(cin, s);
	stringstream ss(s);
	string word;
	while (ss >> word){
		cout<<mp[word]<<" ";
	}
}