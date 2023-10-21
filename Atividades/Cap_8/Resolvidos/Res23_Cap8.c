#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 4

void converter_vetor(int *vet, int mat[][col]){
    
    int i,j,cont=0;
    
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            vet[cont]=mat[i][j];
            cont++;
        }
    }
    
}

int main() {

    int i,j,vet[lin*col],mat[lin][col];
    
    printf("preencha a matriz:\n");
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("Posição[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    
    converter_vetor(&vet,&mat);
    
    printf("\nVETOR RESULTANTE: ");
    for(i=0;i<lin*col;i++){
        printf(" %d ",vet[i]);
    }
    
    return (0);
}

