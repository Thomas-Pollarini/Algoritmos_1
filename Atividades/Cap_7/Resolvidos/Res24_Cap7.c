#include <stdio.h>
#include <stdlib.h>

#define lin 8
#define col 4
#define prof 3

int main() {

    int i,j,k,media[lin][col][prof];
    float mediat[prof],mediag[prof][lin];
    
    printf("Digite as médias:\n");
    for(i=0;i<prof;i++){
        printf("TURMA %d:\n",i+1);
        mediat[i]=0;
        for(j=0;j<lin;j++){
            printf("ALUNO %d:\n",j+1);
            mediag[i][j]=0;
            for(k=0;k<col;k++){
                printf("Diciplina %d:",k+1);
                scanf("%d",&media[j][k][i]);
                
                mediag[i][j]+=media[j][k][i];
            }
        }
    }
    printf("\n\nnMÉDIA GERAL DE CADA ALUNO:\n");
    for(i=0;i<prof;i++){
        printf("TURMA %d:\n",i+1);
        for(j=0;j<lin;j++){
            mediag[i][j]/=col;
            mediat[i]+=mediag[i][j];
            printf("Aluno %d: %.2f\n",j+1,mediag[i][j]);
        }
    }
    printf("\nMÉDIA DE CADA TURMA:\n");
    for(i=0;i<prof;i++){
        mediat[i]/=lin;
        printf("Turma %d: %.2f\n",i+1,mediat[i]);
    }
    return (0);
}

