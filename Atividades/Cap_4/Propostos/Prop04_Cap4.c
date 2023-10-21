#include <stdio.h>
#include <stdlib.h>



int main() {
    
    float n1,n2,n3;
    
    printf("Digite três números:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    
    if(n1==n2 && n2==n3){
        printf("Os três números são iguais.\n");
    }
    else{
        if(n1>n2 && n1>n3){
            printf("O maior número é: %f.\n",n1);
        }
        else{
            if(n2>n1 && n2>n3){
                printf("O maior número é: %f.\n",n2);
            }
            else{
                printf("O maior número é: %f.\n",n3);
            }
        }
    }
    
    return (0);
}
