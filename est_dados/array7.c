
#include <stdio.h>

int main(){

	int n,m,i,j,soma;
	printf("Numero de linhas e linhas  da matriz");
	scanf("%d",&n);
	int mat[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<n;i++){
	soma=soma+mat[i][n-1-i]	
	}
	printf("%d",soma);
	

return 0;
}
