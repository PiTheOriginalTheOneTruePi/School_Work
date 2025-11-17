#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char texto[1000],ch,temp;
    int i,n,min,cont=0;
    
    printf("texto: ");
    fgets(texto,sizeof(texto),stdin);
    printf("\n caracter a pesquisar");
    scanf("%c",&ch);
    
    for(i=0;texto[i] != '\0'; i++){ //\0 <- ultimo valor do vetor
        if(ch==texto[i]) cont++;    
    }

    printf("o caracter %c occore %d vezes",ch,cont);

    return 0;
}
