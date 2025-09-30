
#include <stdio.h>

int main(){

	int n,m,i,j;
	printf("Numero de linhas da matriz");
	scanf("%d",&n);
	printf("Numero de colunas da matriz");
	scanf("%d",&m);
	int mat[n][m];
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
