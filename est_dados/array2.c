#include <stdio.h>

int main(){

int n,m;
scanf("%d",&n);
scanf("%d", &m);

int mat[n][m];

for (int i=0;i<n;i++){
	for (int j=0;j<m;j++){
	scanf("\n%d",&mat[i][j]);
	}

}

for (int i=0;i<n;i++){
	for (int j=0;j<m;j++){
	printf("\n%d",mat[i][j]);
	}

}

return 0;
}
