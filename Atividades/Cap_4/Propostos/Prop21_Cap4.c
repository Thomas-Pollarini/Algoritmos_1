#include <stdio.h>
#include <stdlib.h>


int main() {

    int cod;
    float preço;
    
    printf("Digite o preço do produto: ");
    scanf("%f",&preço);
    printf("Digite o código de origem do produto: ");
    scanf("%d",&cod);
    
    if(cod==1){
        printf("Procedência: Sul");
    }
    if(cod==2){
        printf("Procedência: Norte");
    }
    if(cod==3){
        printf("Procedência: Leste");
    }
    if(cod==4){
        printf("Procedência: Oeste");
    }
    if(cod==5 || cod==6){
        printf("Procedência: Nordeste");
    }
    if(cod>=7 && cod<=9){
        printf("Procedência: Sudeste");
    }
    if(cod>=10 && cod<=20){
        printf("Procedência: Centro-oeste");
    }
    if(cod>=21 && cod<=30){
        printf("Procedência: Nordeste");
    }
    
    
    return (0);
}

