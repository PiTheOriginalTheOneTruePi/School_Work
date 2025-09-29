#include <stdio.h>

int main(){

	int n,media,soma=0;
	printf("\nintruduzir linhas 'n':");
	scanf("%d",&n);


	int vec[n];

	for (int i=0;i<n;i++){
		scanf("\n%d",&vec[i]);
		soma=soma+vec[i];
	}
	
	media=soma/n;
	printf("\n soma: %d \n media: %d\n",soma ,media);

return 0;
}
