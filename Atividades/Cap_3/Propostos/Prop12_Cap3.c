#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float num1,num2,p1,p2;
     
    printf("Escreva dois numeros maiores que zero: \n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    if(num1<=0){
    printf("Você escreveu pelo menos um número menor ou igual a zero.\n"
                "Escreva apenas números maiores que zero.\n");}
    
    /*se o primeiro número for menor ou igual a 0 
     ele interrompe o processo, caso não seja ele verifica o segundo*/
    
      else{if(num2<=0){
      printf("Você escreveu pelo menos um número menor ou igual a zero.\n"
                "Escreva apenas números maiores que zero.\n");}
    
    //se o segundo não for <= 0 o programa continua.
    
    else{
          
          p1= pow(num1,num2);
          p2= pow(num2,num1);
          
          printf("Primeiro número elavado ao segundo número: %.3f\n"
                  "Segundo número elavado ao primeiro número: %.3f\n",p1,p2);}}
    
    return (EXIT_SUCCESS);
}

