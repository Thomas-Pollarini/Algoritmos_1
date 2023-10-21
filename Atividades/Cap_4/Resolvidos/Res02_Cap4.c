#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    float n1,n2,n3,media,nexame;
    
    printf("Digite o valor das três notas:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    
    media=(n1+n2+n3)/3.0;
    
    printf("Média aritmédica:%.2f\n",media);
    
    if(media >= 7.0 && media <= 10.0){
        printf("APROVADO");
    }
    if(media >= 3.0 && media < 7.0){
        printf("EXAME");
        nexame=12-media;
        printf("\nDeve tirar nota %.2f para ser aprovado",nexame);
    }
    if(media >= 0.0 && media < 3.0){
        printf("REPROVADO");
    }
    
    return (0);
}

