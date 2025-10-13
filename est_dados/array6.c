
#include <stdio.h>

int main(){

	int n,m,i,j,soma=0;
	printf("Numero de linhas e colunas da matriz");
	scanf("%d",&n);
	int mat[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat[i][j]);
			if (i==j){
				soma=soma+mat[i][j];
			}

		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("\n%d",mat[i][j]);
			printf("\n%d",soma);
		}

	}

return 0;
}
