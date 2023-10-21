
#include <stdio.h>
#include <stdlib.h>

#define tam 8
#define aluno 10

int main() {

    int i,j,cn,num[aluno],nota[aluno];
    float perc=0;
    char gab[tam],resp;
    
    printf("Digite o gabarito da prova:\n");
    for(i=0;i<tam;i++){
        printf("Questão %d-",i+1);
        scanf(" %c",&gab[i]);
    }
    for(i=0;i<aluno;i++){
        printf("Digite o número do aluno: ");
        scanf("%d",&num[i]);
        printf("Digite as respostas:\n");
        cn=0;
        for(j=0;j<tam;j++){
            printf("Questão %d-",j+1);
            scanf(" %c",&resp);
            if(resp==gab[j]){
                cn++;
            }
        }
        nota[i]=cn;
        if(cn>=6){
            perc++;
        }
    }
    for(i=0;i<aluno;i++){
        printf("\nNúmero do aluno: %d\nNota do aluno: %d\n",num[i],nota[i]);
    }
    
    perc=(perc*100.0)/aluno;
    printf("Porcentagem de alunos aprovados: %.2f%%",perc);
    
    
    return (0);
}

