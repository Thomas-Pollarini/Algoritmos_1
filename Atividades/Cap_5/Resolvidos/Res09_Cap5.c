#include <stdio.h>
#include <stdlib.h>

int main() {

    int contr=0,conte=0,conta=0;
    float n1,n2,media,msala=0;
    
    for(int i=0;i<6;i++){
        
        printf("Digite a primeira nota: ");
        scanf("%f",&n1);
        printf("Digite a segunda nota: ");
        scanf("%f",&n2);
        
        media=(n1+n2)/2.0;
        //algoritmo para juntar todas as médias.
        msala=msala+media;
        
        printf("Média  aritmética: %.2f\n",media);
        //algoritmo para mostrar resultado.
        if(media <= 3.0 ){
            printf("REPROVADO.\n");
            contr++;
        }else{
            if(media > 3.0 && media < 7.0){
                printf("EXAME.\n");
                conte++;
            }else{
            printf("APROVADO.\n");
            conta++;
            }
        }
    }
    
    printf("Total de alunos aprovados: %d\nTotal de alunos de exame: %d\nTotal de alunos reprovados: %d\n",conta,conte,contr);
    
    msala=msala/6.0;
    
    printf("Média da classe: %.2f\n",msala);
   
    return (0);
}

