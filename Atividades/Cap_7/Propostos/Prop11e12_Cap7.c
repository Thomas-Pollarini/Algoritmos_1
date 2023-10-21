#include <stdio.h>
#include <stdlib.h>

#define lin 8
#define col 5

int main() {

    int i,j,cod,cont=0,cont3=0,idade[lin],disc[col],prova[lin][col];
    float media=0,cont2=0;
    
    printf("Digite a idade dos alunos:\n");
    for(i=0;i<lin;i++){
        printf("Aluno %d: ",i);
        scanf("%d",&idade[i]);
    }
    printf("Digite o código de cada disciplina:\n");
    for(i=0;i<col;i++){
        printf("Disclipa %d: ",i);
        scanf("%d",&disc[i]);
    }
    
    printf("Digite a quantidade de provas feitas:\n");
    for(i=0;i<lin;i++){
        printf("Aluno %d:\n",i);
        for(j=0;j<col;j++){
            printf("Diciplina %d: ",disc[j]);
            scanf("%d",&prova[i][j]);
        }
    }
        
    printf("Digite o código da disciplina:");
    scanf("%d",&cod);
    
    for(i=0;i<col;i++){
        if(cod==disc[i]){
            cont3++;
            for(j=0;j<lin;j++){
                if(idade[j]>=18 && idade[j]<=25&& prova[j][i]>2){
                    cont++;
                }
            }
        }
    }
    if(cont3==0){
        printf("\nNão existe disciplina com esse código.");
    }else{
        printf("\nQntd de alunos com idade entre 18 e 25 anos que fizeram mais de 2 provas da disciplina: %d",cont);
    }    
    
    printf("\nLista de alunos que fizeram menos de 3 provas:");
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            if(prova[i][j]<3){
                printf("\nAluno: %d\nDisciplina: %d",i,disc[j]);
            }
        }
    }
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            if(prova[i][j]==0){
                media+=idade[i];
                cont2++;
                j+=1000000;
            }
        }
    }    
    media/=cont2;
    printf("\nMédia das idades: %.2f",media);
    
    return (0);
}

