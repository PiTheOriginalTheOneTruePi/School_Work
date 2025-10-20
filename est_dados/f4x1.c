#include <stdio.h> 
#include <stdbool.h>

int P_vec(int n,int v,int vec[]);
int C_vec(int n,int v,int vec[]);

int main(){

	int n,i,y,valor;
	bool x;

	printf("Inserir tamanho do vetor");
	scanf("%d",&n);

	int vec[n];

	for (i=0;i<n;i++){
		scanf("%d",&vec[i]);
	}

	printf("Escolher valor");
	scanf("%d",&valor);

	x=P_vec(n,valor,vec);
	if(x){
		printf("o valor %d existe",valor);
	}else{
		printf("o valor %d nao existe",valor);
	}
	y=C_vec(n,valor,vec);
	printf("o valor %d occore %d vezes",valor,y);

	return 0;
}

int P_vec(int n,int v,int vec[]){
	int i;

	for (i=0;i<n;i++){	
		if (vec[i]==v)
			return 1;
	}
	return 0;
}

int C_vec(int n,int v,int vec[]){
	int i,c=0;
	
	for (i=0;i<n;i++){
		if (vec[i]==v)
			c++;
	}
	return c;
}
