#include <stdio.h>

long factorial(int num);
long primo(long num);

int main(){

	int i,num,num1,num2;
	printf("Inserir numero inteiro: ");
	scanf("%d",&num);
	printf("\n\nFactorial(%d)=%ld",num,factorial(num));	
	if(primo(num)==1){
		printf("\n%d: numero primo",num);
	}
	else{
		printf("\n%d: numero nao primo",num);
	}
	printf("\n inserir numero inteiro pra limite inferior");
	scanf("%d",&num1);
	printf("\n inserir numero inteiro pra limite superior");
	scanf("%d",&num2);
	printf("\n numeros primos no intervalo: \n ");
	for (i=num1; i<=num2;i++){
		if (primo(i)==1) printf("%d\t",i);
	}

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

long primo(long num){


	return
}
