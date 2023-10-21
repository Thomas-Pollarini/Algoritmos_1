#include <stdio.h>
#include <stdlib.h>

float peso_ideal(float alt, char sexo){
    
    float peso;
    
    if(sexo=='M'){
        peso=(72.7*alt)-58;
    }else{
        peso=(62.1*alt)-44.7;
    }
    
    return peso;
}

int main() {

    float alt,peso;
    char sexo;
    
    printf("Digite sua altura: ");
    scanf("%f",&alt);
    printf("Digite seu sexo(M/F): ");
    scanf(" %c",&sexo);
    
    peso=peso_ideal(alt,sexo);
    
    printf("\nPeso ideal: %.2f\n",peso);
    
    return (0);
}

