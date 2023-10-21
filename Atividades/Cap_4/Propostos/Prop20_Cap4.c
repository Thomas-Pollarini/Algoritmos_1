#include <stdio.h>
#include <stdlib.h>


int main() {

    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    
    if(idade<5){
        printf("Não existe categoria para essa idade.");
    }
    if(idade>=5 && idade<=7){
        printf("Categoria: Infantil");
    }
    if(idade>=8 && idade<=10){
        printf("Categoria: Juvenil");
    }
    if(idade>=11 && idade<=15){
        printf("Categoria: Adolecente");
    }
    if(idade>=16 && idade<=30){
        printf("Categoria: Adulto");
    }
    if(idade>30){
        printf("Categoria: Sênior");
    }
    
    
    return (0);
}

