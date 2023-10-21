#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade,cont=0;
    float media=0;
    
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    
    while(idade!=0){
        
        media=media+idade;
        cont++;
        
        printf("Digite sua idade: ");
        scanf("%d",&idade);
        
    }
    
    media=media/cont;
    
    printf("Média das idades: %.2f\n",media);
    
    
    
    return (0);
}

