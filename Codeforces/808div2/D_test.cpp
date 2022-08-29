#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int main(){

	std::vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(34);
	v.push_back(21);
	v.push_back(4);

	vector<int> :: iterator it = max_element(v.begin(), v.end());
	cout<<*it;
}