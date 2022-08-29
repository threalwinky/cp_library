#include<iostream>
#include<math.h>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int maxn(int n){
    int temp = 0, j = 0, k = 0, save = n;
    if (save<0 && save%10==0){
        map<int , int> m;
        if (n<0) n = abs(n);
    	while (n!=0){
        	m[n%10]++;
        	n/=10;
        	k++;
   		}
        k--;
        int temp2 = 0;
		for (auto x:m){
        	for (int i = 0; i<x.second; i++){
                if (x.first == 0) temp2++;
            	temp += x.first*pow(10, k);
          		k--;
        	}
   		}
       	int p = temp/pow(10, temp2), q = temp%pow(10, temp2);
        
        cout<<p+q;
    }
    
    else{
        map<int , int> m;
            while (n!=0){
                m[n%10]++;
                n/=10;
            }
        for (auto x:m){
            for (int i = 0; i<x.second; i++){
                temp += x.first*pow(10, j);
                j++;
            }
        }
    }
    return temp;
}
int main(){
    int n; cin>>n;
    cout<<maxn(n);
}