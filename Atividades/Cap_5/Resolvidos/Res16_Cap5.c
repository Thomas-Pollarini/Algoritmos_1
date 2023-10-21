#include <stdio.h>
#include <stdlib.h>

int main() {

    float base,alt;
    
    printf("Digte o valor da base: ");
    scanf("%f",&base);
    
    while(base<=0){
        printf("Valor de base inválido\nDigte um valor válido: ");
        scanf("%f",&base);
    }
    
    printf("Digte o valor da altura: ");
    scanf("%f",&alt);
    
    while(alt<=0){
        printf("Valor da altura inválido\nDigte um valor válido: ");
        scanf("%f",&alt);
    }
    
    printf("Área do triângulo: %.2f",(base*alt)/2);
    
    return (0);
}

