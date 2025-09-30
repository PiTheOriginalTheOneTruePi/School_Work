#include <stdio.h>

int main(){

	int n,i,j;
	scanf("%d",&n);
	int mat[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		scanf("%d",&mat[i][j]);
		}

	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		printf("\n%d",mat[i][j]);
		}

	}

return 0;
}
