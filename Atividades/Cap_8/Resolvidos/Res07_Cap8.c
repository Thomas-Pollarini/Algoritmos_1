#include <stdio.h>
#include <stdlib.h>


float cal_media(float n1, float n2, float n3, char cod){
    
    float media;
    
    if(cod==65){
        media=(n1+n2+n3)/3.0;
    }else{
        media=(n1*5+n2*3+n3*2)/10.0;
    }
    
    return media;
    
}

int main() {

    float media,n1,n2,n3,cont=0;
    char cod;
    
    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    printf("Digite a segunda nota: ");
    scanf("%f",&n2);
    printf("Digite a terceira nota: ");
    scanf("%f",&n3);
    do{
    printf("Menu:\nA-Média aritmética\nP-Média ponderada\nDigite uma opção: ");
    scanf(" %c",&cod);
    if(cod==65 || cod==80){
        cont++;
    }
    }while(cont<1);
    media=cal_media(n1,n2,n3,cod);
    printf("\nMédia: %.2f",media);
    return (0);
}

