#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int x;
    float n1,n2;
    
    printf("Digite dois números:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    
    printf("1-O primeiro número elevado ao segundo número.\n"
           "2-Raiz quadrada de cada um dos números.\n"
           "3-Raiz cúbica de cada um dos números.\n"
           "Digite o número referente a opção desejada: ");
    scanf("%d",&x);
    
    switch(x){
        case 1:
            n1=pow(n1,n2);
            printf("Primeiro número elevado ao segundo: %f\n",n1);
          break;
          
        case 2:
            n1=sqrt(n1);
            n2=sqrt(n2);
            printf("Raiz quadrada do primeiro número: %f\n",n1);
            printf("Raiz quadrada do segundo número: %f\n",n2);
          break;
          
        case 3:
            n1=cbrt(n1);
            n2=cbrt(n2);
            printf("Raiz cúbica do primeiro número: %f\n",n1);
            printf("Raiz cúbica do segundo número: %f\n",n2);
    }
    
    
    return(0);
    
}