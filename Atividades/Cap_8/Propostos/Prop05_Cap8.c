#include <stdio.h>
#include <stdlib.h>


void verificar(){
    
    int num;

    printf("Digite um número: ");
    scanf("%d",&num);

    if(num>=0){
        printf("\nNÚMERO É POSITIVO\n");
    }else{
        printf("\nNÚMERO É NEGATIVO\n");
    }
}

int main() {

    
    verificar();
    
    return (0);
}

