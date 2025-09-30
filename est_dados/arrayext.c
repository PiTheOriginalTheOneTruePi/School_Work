#include <stdio.h>

int main(){

	int n,i,j;
	scanf("%d",&n);
	float m1[n][n],m2[n][n],resultado[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("m1[%d][%d]= ",i+1,j+1);
			scanf("%f",&m1[i][j]);		
			printf("m2[%d][%d]= ",i+1,j+1);
			scanf("%f",&m2[i][j]);
			resultado[i][j]=m1[i][j]+m2[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("\n%f",resultado[i][j]);	
		
		}
	}




return 0;
}
