#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int n, int vec[]);
void Rsort(int n, int vec[]);
void Bsort(int n, int vec[]);
void RBsort(int n, int vec[]);
int Bin_search(int v,int n, int vec[]);


int main(){

	int inf,sup,t,i,v;
	
	printf("indique tamanho do array \n> ");
	scanf("%d",&t);

	int vec[t];
	
	printf("indique limite inferior \n> ");
	scanf("%d",&inf);
	printf("indique limite superior \n> ");
	scanf("%d",&sup);

	for(i=0;i<t;i++){
		vec[i]= inf +((float)rand()/RAND_MAX)*(float)(sup-inf+1);
	}

	sort(t,vec);
	for(i=0;i<t;i++){
		printf("\nsort (crescente) > %d",vec[i]);
	}

	Rsort(t,vec);
	for(i=0;i<t;i++){
		printf("\nRsort (decrescente) > %d",vec[i]);
	}

	Bsort(t,vec);
	for(i=0;i<t;i++){
		printf("\nBsort (crescente) > %d",vec[i]);
	}

	RBsort(t,vec);
	for(i=0;i<t;i++){
		printf("\nRBsort (decrescente) > %d",vec[i]);
	}

    sort(t,vec);
    printf("\nescolha um valor \n> ");
	scanf("%d",&v);
    if(Bin_search(v,t,vec)==-1){
            printf("\nvalor nao existe no vetor");
    }else{
            printf("\no valor existe na posicao %d do vetor",Bin_search(v,t,vec));
    }


	return 0;
}


void sort(int n, int vec[]){

	int i,j,min,temp;

	for (i=0;i<n-1;i++){

		min=i;
	
		for(j=i+1;j<n;j++){

			if(vec[j]<vec[min]){
				min=j;
			}
		}
		if (min!=i){

			temp=vec[i];
			vec[i]=vec[min];
			vec[min]=temp;
		}

		
	}

}

void Rsort(int n, int vec[]){

	int i,j,min,temp;

	for (i=0;i<n-1;i++){

		min=i;
	
		for(j=i+1;j<n;j++){

			if(vec[j]>vec[min]){
				min=j;
			}
		}

		if (min!=i){

			temp=vec[i];
			vec[i]=vec[min];
			vec[min]=temp;
		}

		
	}
}

void Bsort(int n, int vec[]) {
    int i, j, temp;

    for (i = n - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (vec[j] > vec[j + 1]) {
                temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}

void RBsort(int n,int vec[]){

    int i,j,temp;
    for(i=n-1;i>0;i--){
        for(j=0;j<i;j++){
            if(vec[j]<vec[j+1]){
                temp=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
            }  
        }
    }
}

int Bin_search(int v,int n ,int vec[]){

    int mid,ini=0,fim=0;
    
    while(ini<=fim){
        mid=(ini+fim)/2;
        if(v < vec[mid]){
            fim=mid-1;
        }else if(v > vec[mid]){
            ini=mid+1;
        }else{
            return mid;
        }
    }
    return -1;
}

