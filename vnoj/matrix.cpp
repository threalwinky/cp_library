#include<iostream>
#include<cstring>
using namespace std;
int n,m, a[201][201], dem[201];
a

int main(){
	freopen("matrix.out", "w", stdout);
	cin>>n>>m;
	memset(a, -1, sizeof(a));
	memset(dem, 0, sizeof(dem));
	for (int i = 1; i<=n; i++){
		for (int j = 1; j <= m; j++)
			cin>>a[i][j];
	}
	int i = 1;
	while (a[i][i] != -1){
		for (int j = 1; j<=m; j++)
			{
				if (a[i][j] == 1) dem[i]++;
				else dem[i]--;
				a[i][j] = -1;
				if (a[n][j] == 1) dem[i]++;
				else dem[i]--;
				a[n][j] = -1;
			}
		for (int j = i+1; j<=n-1; j++){
			if (a[j][m] == 1) dem[i]++;
			else dem[i]--;
			a[j][m] = -1;
			if (a[j][0] == 1) dem[i]++;
			else dem[i]--;
			a[j][0] = -1;
		}
		i++;m-=2;n-=2;
	}

	for (int i = 0; i<10; i++){
		for (int j = 0; j < 10; j++)
			cout<<a[i][j]<<" "; cout<<endl;
	}
	for (int i = 0; i<10; i++) cout<<dem[i]<<" ";
}