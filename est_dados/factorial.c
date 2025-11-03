#include <stdio.h>

long factorial(int num);
long rfactorial(int num);
long primo(long num);
long fibonacci(int n);
long rfibonacci(int n);
int mdc(int n1,int n2);
int ecl(int n1,int n2);

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
	printf("\n\nRecursivo -> Factorial(%d)=%ld",num,rfactorial(num));	
	printf("\n\nMax Divisor Commum = %d",mdc(num1,num2));
	printf("\n\nMax Divisor Commum (ecl)= %d",ecl(num1,num2));
	printf("\n\nRecursivo -> Fibonacci= %ld",rfibonacci(num));
	printf("\n\nFibonacci= %ld",fibonacci(num));

	return 0;
}

long factorial(int num){

	int i;
	long fact;
	fact=1;
	for(i=2;i<=num;i++)
		fact = fact* i;
	return(fact);
}

long rfactorial(int num){

	if(num==0){
		return 1;
	}
	else{
		return num*rfactorial(num-1);
	}

}

long primo(long num){
	
	int i,np=(int)num/2;

	if(num<2)return 0;
	if(num==2)return 1;

	i=2;

	while((num % i !=0) && (i<=np)) i++;

	if(num % i !=0) return 1;

	else return 0;
}
long fibonacci(int n){
//teste 
	int r=0,i=1,x=1,y=0;
	
	if(n==1)
		return 1;

	for (i;i<n;i++){
		r=x+y;
		y=x;
		x=r;
		printf("fibonaci de (%d) = %d",i,r);
	}
	return r;


}
/*
long fibonacci(int n){

	int r=0,i=1,x=1,y=0;
	
	if(n==1)
		return 1;

	for (i;i<n;i++){
		r=x+y;
		y=x;
		x=r;
	}
	return r;


}
*/
long rfibonacci(int n){

	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return rfibonacci(n-1)+rfibonacci(n-2);
}

int mdc(int n1,int n2){

	int min,maxdiv,flag,r1,r2;
	if(n1<n2)
		min=n1;
	else 
		min=n2;
	maxdiv=min;
	flag=1;

	while(flag==1){
		r1=n1%maxdiv;
		r2=n2%maxdiv;
		if(r1==0 && r2==0)
			flag=0;
		else
			maxdiv=maxdiv-1;
	}
	
	return (maxdiv);
}

int ecl(int n1 , int n2){

	if (n2==0)
		return n1;
	else
		return ecl(n2,n1%n2);
}
