#include <stdio.h>
#include <stdlib.h>

float media_positivos(){
    
    float num,cont,media=0;
 
    
    do{
        do{
            printf("Digite um número: ");
            scanf("%f",&num);
        }while(num<0);
        if(num>0){
            media+=num;
            cont++;
        }
    }while(num!=0);
    
    media/=cont;
    
    return media;
}

int main() {

    float media;
    
    media=media_positivos();
    
    printf("\nMédia: %.2f\n",media);
    
    return (0);
}

