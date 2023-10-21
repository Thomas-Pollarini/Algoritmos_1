#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    float n1,n2,n3,media;
    
    printf("Digite o a nota do trabalho de laboratorio: ");
    scanf("%f",&n1);
    printf("Digite o a nota da avaliação semestral: ");
    scanf("%f",&n2);
    printf("Digite o a nota do exame final: ");
    scanf("%f",&n3);
    
    media=(n1*2+n2*3+n3*5)/10.0;
    
    printf("Média ponderada:%.2f\n",media);
    
    if(media >= 8.0 && media <= 10.0){
        printf("Obteve conceito A");
    }
    if(media >= 7.0 && media < 8.0){
        printf("Obteve conceito B");
    }
    if(media >= 6.0 && media < 7.0){
        printf("Obteve conceito C");
    }   
    if(media >= 5.0 && media < 6.0){
        printf("Obteve conceito D");
    }
    if(media >= 0.0 && media < 5.0){
        printf("Obteve conceito E");
    }
    
    return (0);
}

