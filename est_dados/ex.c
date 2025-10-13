#include <stdio.h>

int main(){

	int i,j;
	int mat[2][3];


	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		printf("\nlinha %d coluna %d",i,j);
		scanf("%d",&mat[i][j]);
		}
	}


	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\nlinha %d coluna %d= %d",i,j,mat[i][j]);
		}
	}
return 0;
}
