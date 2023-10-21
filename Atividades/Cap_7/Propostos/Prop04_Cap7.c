#include <stdio.h>
#include <stdlib.h>

#define lin 15
#define col 5

int main() {

    int i,j,nota[lin][col];
    float mediat,media[lin];
    char nome[lin][40],sit[lin][15];
   
    for(i=0;i<lin;i++){
        printf("Digite o nome do aluno:");
        scanf("%s",&nome[i]);
        media[i]=0;
        mediat=0;
        printf("Digite as notas do aluno:\n");
        for(j=0;j<col;j++){
            printf("Prova %d: ",j+1);
            scanf("%d",&nota[i][j]);
            
            media[i]+=nota[i][j];
            
        }
     }
    
    for(i=0;i<lin;i++){
        media[i]/=col;
        mediat+=media[i];
        printf("\nAluno: %s\nMédia: %.2f\nSituação: ",nome[i],media[i]);
        if(media[i]>=7){
            printf("Aprovado\n");
        }else{
            if(media[i]>=3 && media[i]<7){
                printf("Exame\n");
            }else{
                printf("Reprovado\n");
            }
        }
    
    }
    
    mediat/=lin;
    printf("\nMédia da classe: %.2f\n",mediat);
    
    return (0);
}

