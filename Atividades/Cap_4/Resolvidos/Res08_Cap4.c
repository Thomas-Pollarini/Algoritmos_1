#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    float n1,n2,soma,raiz;
    int i;
    
    printf("Menu de opções:\n1-Somar dois números\n2-Raiz quadrada de um número\n"
            "Digite a opção desejada: ");
    scanf("%d",&i);
    
    switch(i){
        
        case 1:
            printf("Digite dois números:\n");
              scanf("%f",&n1);
              scanf("%f",&n2);
              
            soma=n1+n2;
            
            printf("A soma dos números é : %f\n",soma);
          break;
        
        case 2: 
            printf("Digite um número: ");
              scanf("%f",&n1);
              
            raiz=sqrt(n1);
            
            printf("A raiz quadrada do número é: %f\n",raiz);
          break;  
          
        
    }
    return (0);
}

