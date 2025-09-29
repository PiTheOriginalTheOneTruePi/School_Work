#include <stdio.h>

int main(){
	
	int vec[5];
	int mat[2][2];
	for(int i=0;i<5;i++){
		vec[i]=i;
		printf("\n%d",vec[i]);
	}
	for (int i=0;i<2;i++){
		for(int j=0;j<2;j++){
		mat[i][j]=j;
		printf("\n%d",mat[i][j]);
		}
	}
	
	
return 0;
}
