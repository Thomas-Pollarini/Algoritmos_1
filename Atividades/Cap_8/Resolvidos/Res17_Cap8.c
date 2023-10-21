#include <stdio.h>
#include <stdlib.h>

#define lin 5
#define col 5

int i,j;

int soma_matriz(int mat[][col]){
    
    int soma=0;
    
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            soma+=mat[i][j];
        }
    }
    
    return soma;
}

int main() {

    int soma,mat[lin][col];
    
    printf("preencha a matriz:\n");
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("Posição[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    
    soma=soma_matriz(&mat);
    
    printf("\nSoma dos elementos da matriz: %d\n",soma);
    
    return (0);
}

