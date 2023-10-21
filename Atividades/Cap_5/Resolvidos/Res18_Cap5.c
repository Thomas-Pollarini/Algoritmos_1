#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    float num;
    
    printf("Digite um número: ");
    scanf("%f",&num);
        
    
    while(num>0){
        
        printf("Valor lido: %f\nValor lido ao quadrado: %f\nValor lido ao cubo:%f\nRaiz quadrada do valor lido: %f\n"
                ,num,pow(num,2),pow(num,3),sqrt(num));
        
        printf("Digite um número: ");
        scanf("%f",&num);
    }
    
    return (0);
}

