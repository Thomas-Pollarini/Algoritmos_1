#include <stdio.h>
#include <stdlib.h>

#define lin 10
#define col 5

void preencher_matriz(float mat[][col]){
    
    int i,j;
    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("Posição[%d][%d]: ",i,j);
            scanf("%f",&mat[i][j]);
        }
    }
    
    
}

float soma_elementos(float mat[][col]){
    
    int i,j;
    float soma=0;
    
    for(i=6;i<lin;i++){
        for(j=0;j<col;j++){
            soma+=mat[i][j];
        }
    }
    
    return soma;
}

int main() {

    float soma,mat[lin][col];
    
    preencher_matriz(&mat);
    
    soma=soma_elementos(&mat);
    
    printf("\nSoma dos elementos abaixo da sexta linha: %.3f\n",soma);
    
    return (0);
}

