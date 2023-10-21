#include <stdio.h>
#include <stdlib.h>

int main() {

    int npar=0,num,soma=0,maior,menor;
    float qntd=0,median,mediap=0,impar=0;
    
    printf("Digite um número: ");
    scanf("%d",&num);
    maior=num;
    menor=num;
    while(num!=30000){
        
        qntd++;//contador
        soma=soma+num;//soma
        
        //separar maior e menor numero
        if(num>maior){
            maior=num;
        }
        if(num<menor){
            menor=num;
        }
        
        //media par
        if(num % 2==0){
            mediap=mediap+num;
            npar++;
        }
        
        //percentagem impar
        if(num % 2==1){
            impar++;
        }
        
        printf("Digite mais um número: ");
        scanf("%d",&num);
    }
    
    median=soma/qntd;           //media total
    mediap=mediap/npar;         //media par
    impar=(impar*100.0)/qntd;     //percentagem impar
    
   printf("Soma dos números digitados: %d\nQuantidade de números digitados: %.0f\n"
           "Média dos números digitados: %.2f\nMaior número digitado: %d\nMenor número digitado: %d\n"
           "Média dos números pares: %.2f\nPorcentagem dos números ímpares entre todos os números digitados: %.2f%%\n",
           soma,qntd,median,maior,menor,mediap,impar);
    
    
    
    return (0);
}

