#include<stdio.h>

int main(){
	
	int n,val,soma1;
	float media;
	printf("Numero de elementos: ");
	scanf("%d",&n);
	float vac[n];
	soma1=0;
	printf("\nfor loops: \n");
	for(int i=0;i<n;i++){
		
		printf("\ninserir %d valor: ", i+1);
		scanf("%d",&val);
		soma1=soma1+val;
		printf("%d\n",soma1);
	}
	media = (float)soma1/n;
	printf("\nTotal: %d", soma1);
	printf("\nMedia: %f", media);
	printf("\nMedia: %.2f",media);
return 0;
}
