#include <stdio.h>
#include <stdlib.h>

#define lin 10
#define col 4


void media_prova(float *media, float nota[][col]){
    
    int i,j;
    
    for(i=0;i<lin;i++){
        media[i]=0;
        for(j=0;j<col;j++){
            media[i]+=nota[i][j];
        }
        media[i]/=col;
    }
    
}

int main() {

    int i,j,cod[lin];
    float media[lin],nota[lin][col];
    
    for(i=0;i<lin;i++){
        printf("Digite o número do aluno: ");
        scanf("%d",&cod[i]);
        for(j=0;j<col;j++){
            printf("Nota na %dº prova: ",j+1);
            scanf("%f",&nota[i][j]);
        }
    }
    
    media_prova(&media,&nota);
    
    printf("\nMÉDIAS ARITMÉTICA:\n");
    for(i=0;i<lin;i++){
        printf("Aluno: %d\nMédia: %.2f\n",cod[i],media[i]);
    }
    printf("\nALUNOS EM RECUPERAÇÃO: ");
    for(i=0;i<lin;i++){
        if(media[i]<6){
            printf(" %d ",cod[i]);
        }
    }
    
    
    return (0);
}

