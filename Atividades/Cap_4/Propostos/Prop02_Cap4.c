#include <stdio.h>
#include <stdlib.h>



int main() {

    float n1,n2,media;
    
    printf("Digite o valor das duas notas:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    
    media=(n1+n2)/2.0;
    
    printf("Média aritmética: %.2f\n",media);
            
    if(media>=0 && media<3.0){
        printf("REPROVADO\n");
    }
    else{
        if(media>=3.0 && media<7.0){
            printf("EXAME\n");
        }
        else{
            printf("APROVADO\n");
        }
    }
    
    
    return (0);
}
