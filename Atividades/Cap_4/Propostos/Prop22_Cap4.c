#include <stdio.h>
#include <stdlib.h>



int main() {

    int idade;
    float peso;
    
    printf("Digite sau idade: ");
    scanf("%d",&idade);
    printf("Digite seu peso: ");
    scanf("%f",&peso);
    
    if(idade<20){
        if(peso<=60.0){
            printf("Grupo de risco: 9");
        }
        if(peso>=60.0 && peso<=90.0){
            printf("Grupo de risco: 8");
        }
        if(peso>90.0){
            printf("Grupo de risco: 7");
        }
    }
    if(idade>=20 && idade<=50){
        if(peso<=60.0){
            printf("Grupo de risco: 6");
        }
        if(peso>=60.0 && peso<=90.0){
            printf("Grupo de risco: 5");
        }
        if(peso>90.0){
            printf("Grupo de risco: 4");
        }
    }
    if(idade>50){
        if(peso<=60.0){
            printf("Grupo de risco: 3");
        }
        if(peso>=60.0 && peso<=90.0){
            printf("Grupo de risco: 2");
        }
        if(peso>90.0){
            printf("Grupo de risco: 1");
        }
    }
    
    
    return (0);
}

