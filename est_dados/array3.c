#include <stdio.h>

int main(){

	int n,max=-9999999,min=99999;
	scanf("%d",&n);
	int vec[n];

	for (int i=0;i<n;i++){
		scanf("%d",&vec[i]);
		if(max<vec[i]){max=vec[i];}
		if(min>vec[i]){min=vec[i];}
	}
	printf("max= %d \n min= %d",max,min);

	return 0;
}
