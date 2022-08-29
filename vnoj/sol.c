#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
#define MAX 1002
int max(int a, int b){ return (a > b) ? a : b; }
int a[MAX], b[MAX], F[MAX][MAX];
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	for (int i = 1; i<=m; i++){
		scanf("%d", &b[i]);
	}
	for (int i = 1; i<=n; i++){
		for (int j = 1; j<=m; j++){
			if (a[i] == b[j]) F[i + 1][j + 1] = F[i-1][j-1] +1;
			else F[i+1][j+1] = max(F[i][j+1], F[i+1][j]);
		}
	}
	printf("%d", F[n+1][m+1]);
	
}