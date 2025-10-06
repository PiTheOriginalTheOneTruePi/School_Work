#include <stdio.h>

long factorial(int num);

int main(){

	int i,num;
	printf("Inserir numero inteiro: ");
	scanf("%d",&num);
	printf("\n\nFactorial(%d)=%ld",num,factorial(num));
	

	return 0;
}

long factorial(int num){

	int i;
	long int fact;
	fact=1;
	for(i=2;i<=num;i++)
		fact += i;
	return(fact);

}
