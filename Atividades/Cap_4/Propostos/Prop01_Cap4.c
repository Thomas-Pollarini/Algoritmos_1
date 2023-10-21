#include <stdio.h>
#include <stdlib.h>




int main() {

    float n1,n2,n3,n4,media;
    
    printf("Digite o valor das quatro notas:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&n4);
    
    media=(n1+n2+n3+n4)/4.0;
    
    printf("Média aritmética: %.2f\n",media);
            
    if(media>=7){
        printf("APROVADO\n");
    }
    else{
        printf("REPROVADO\n");
    }
        
    return (0);
}

