#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 6

int main() {

    int i,j,cont,vet[lin*col],mat[lin][col];
    
    printf("Preencha o vetor:\n");
    for(i=0;i<lin*col;i++){
        scanf("%d",&vet[i]);
    }
    cont=0;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            mat[i][j]=vet[cont];
            cont++;
        }
    }
    printf("\nMATRIZ:");
    for(i=0;i<lin;i++){
        printf("\nLinha %d: ",i);
        for(j=0;j<col;j++){
            printf(" %d ",mat[i][j]);
        }
    }
    
    return (0);
}

