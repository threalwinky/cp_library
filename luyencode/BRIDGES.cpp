#include<iostream>
using namespace std;
struct cau
{
    int lang1, lang2;
};
int main(){
	int n,s = 0; cin>>n;
	cau lang[n];
	for (int i = 0; i<n; i++){
		cin>>lang[i].lang1>>lang[i].lang2;
	}
	for (int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
			if (((lang[i].lang1 > lang[j].lang1)&&(lang[i].lang2 < lang[j].lang2))||((lang[i].lang1 < lang[j].lang1)&&(lang[i].lang2 > lang[j].lang2)))
			s+=1;
		}
	}
	cout<<s/2;
}
