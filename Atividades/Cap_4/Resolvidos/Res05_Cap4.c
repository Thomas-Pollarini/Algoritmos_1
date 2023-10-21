#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    
    float n1,n2,n3,n4;
    
    printf("Digite três números em ordem crescente:\n");
      scanf("%f",&n1);
      scanf("%f",&n2);
      scanf("%f",&n3);
    printf("Digite um número qualquer: ");
      scanf("%f",&n4);
      
    if(n4>n3){ 
        printf("A ordem descrescente dos números é: %f, %f, %f, %f",n4,n3,n2,n1);
    }  
    else{
        if(n4>n2){
            printf("A ordem descrescente dos números é: %f, %f, %f, %f",n3,n4,n2,n1);
        }
        else{
            if(n4>n1){
                printf("A ordem descrescente dos números é: %f, %f, %f, %f",n3,n2,n4,n1);
            }
            else{
                printf("A ordem descrescente dos números é: %f, %f, %f, %f",n3,n2,n1,n4);
            }
        }
    } 
    return (0);
}

