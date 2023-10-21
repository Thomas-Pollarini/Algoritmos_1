#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade;
    
    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    
    if(idade>=18){
        printf("Atingiu a maioridade.\n");
    }
    else{
        printf("Não atingiu a maioridade.\n");
    }
    
    return (0);
}

