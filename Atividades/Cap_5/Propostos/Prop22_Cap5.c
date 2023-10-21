#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    int idade,cont=0;
    float alt,media=0;
    
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    
    while(idade>0){
        
        printf("Digite sua altura: ");
        scanf("%f",&alt);
        
        if(idade>50){
            media=media+alt;
            cont++;
            
        }
        printf("Digite sua idade: ");
        scanf("%d",&idade);
        
    }
    media=media/cont;
    
    printf("\nMédia das alturas de pessoas com mais de 50 anos: %.2f\n",media);
    
    return (0);
}

