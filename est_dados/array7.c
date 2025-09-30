
#include <stdio.h>

int main(){

	int n,m,i,j,soma;
	printf("Numero de linhas da matriz");
	scanf("%d",&n);
	printf("Numero de colunas da matriz");
	scanf("%d",&m);
	int mat[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&mat[i][j]);
			if (i=j){
				soma=soma+mat[i][j];
			}

		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",mat[i][j]);
			printf("%d",soma);
		}

	}

return 0;
}
