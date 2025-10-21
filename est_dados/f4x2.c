#include <stdio.h> 
#include <stdbool.h>

int main(){

	int n,m,i,j,y=0,valor;
	bool x=0;

	printf("Inserir linhas da matriz");
	scanf("%d",&n);

	printf("Inserir colunas da matriz");
	scanf("%d",&m);


	int vec[n][m];

	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			scanf("%d",&vec[i][j]);
		}
	}

	printf("Escolher valor");
	scanf("%d",&valor);
	
/*	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			if(valor==vec[i][j]){
				x=1;
				break;
			}
		}
	}
*/
	j=0;
	i=0;
	x=0;

	while((x!=1) && (i<n)){
		while((x!=1) && (j<m)){
			if(valor==vec[i][j]){
				x=1;
			}
			j++;
		}
		i++;
	}


	if(x==1){
		printf("o valor %d existe",valor);
	}else{
		printf("o valor %d nao existe",valor);
	}
	
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			if(valor==vec[i][j]){
				y++;
			}
		}
	}
		

	printf("o valor %d occore %d vezes",valor,y);

	return 0;
}
