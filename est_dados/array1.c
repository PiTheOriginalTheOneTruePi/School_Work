#include <stdio.h>

int main(){

	int n;
	float soma=0,media;
	printf("\nintruduzir linhas 'n':");
	scanf("%d",&n);

	int vec[n];

	for (int i=0;i<n;i++){
		scanf("\n%d",&vec[i]);
		soma=soma+vec[i];
	}
	
	media=soma/n;
	printf("\n soma: %f \n media: %f\n",soma ,media);
	

	soma=0;
	i=1;
	while(i<n){
	soma=soma+v[i];
	i=i+1
	}
	media=(float)soma/n;
	printf("%d %d",soma,media)

return 0;
}
