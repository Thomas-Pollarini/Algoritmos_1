#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float num,quad,cub,rquad,rcub;
    printf("Digite um número maior que 0: "); 
    scanf("%f",&num);
    if (num>0){
      quad = pow(num,2);
      cub= pow(num,3);
      rquad= sqrt(num); //função que faz raíz quadrada
      rcub= cbrt(num); //função que faz raíz cúbica
      printf("Número digitado ao quadrado: %.3f\n"
            "Número digitado ao cubo: %.3f\n"
            "Raiz quadrada do número digitado: %.3f\n"
            "Raiz cúbica do número digitado: %.3f\n",quad,cub,rquad,rcub);
    }
    else{
        printf("Erro, escreva um numero positivo maior que 0.\n");
    }
    
    return (EXIT_SUCCESS);
}

