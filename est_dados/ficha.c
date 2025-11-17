#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float max_v(int vec[],int n);
float min_v(int vec[],int n);
void ssort(int vec[], int n);


int main(){

    int n,i;

    printf("tamanho do vetor");
    scanf("%d",&n);
    int vec[n];

    srand(time(NULL));
    for(i=0;i<n;i++){ vec[i]= (float)rand()/RAND_MAX*(20); }

    printf("maior valor = %f",max_v(vec,n));
    printf("menor valor = %f",min_v(vec,n));

    ssort(vec,n);

    return 0;
}

float max_v(int vec[],int n){

    int i;
    float out=vec[0];
    
    for(i=0;i<n;i++){
        if(out<vec[i]) out=vec[i];
    }

    return out;
}
float min_v(int vec[],int n){

    int i;
    float out=vec[0];
    
    for(i=0;i<n;i++){
        if(out>vec[i]) out=vec[i];
    }

    return out;
}

void ssort(int vec[],int n){

    int i,j,min,temp;

    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(vec[j]<vec[min]) min=j;
        }
        if(min!=i){
        
            temp=vec[i];
            vec[i]=vec[min];
            vec[min]=temp;
        }
    }

}


