#include<bits/stdc++.h>
using namespace std;
char a[8][8];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while (T--){
		for (int i = 0; i<8; i++){
			for (int j = 0; j < 8; j++){
				cin>>a[i][j];
			}
		}
		bool flag = 0;
		for (int i = 0; i<8; i++){
			int tmp1 = 0, tmp2 = 0;
			for (int j = 0; j<8; j++){
				if (a[i][j] == 'R') tmp1 ++; 
				
			}
			if (tmp1 == 8){
				cout<<"R\n";
				flag = 1;
			}
			
			if (flag == 1) break;
		}
		for (int i = 0; i<8; i++){
			if (flag== 1) break;
			int tmp1 = 0, tmp2 = 0;
			for (int j = 0; j<8; j++){
				
				if (a[j][i] == 'B') tmp2++;
			}
 
			if (tmp2 == 8){
				cout<<"B\n";
				flag = 1;
			}
			if (flag == 1) break;
		}
	}
}
