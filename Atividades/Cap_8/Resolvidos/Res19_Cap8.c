#include <stdio.h>
#include <stdlib.h>

#define tam 6

int i,j;

int multiplicar_matriz(int mat[][tam]){
    
    int mult;
    
    for(i=0;i<tam;i++){
        mult=mat[i][i];
        for(j=0;j<tam;j++){
            
            mat[i][j]*=mult;
        }
    }    
}

int main() {

    int mat[tam][tam];
    
    printf("preencha a matriz:\n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("Posição[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    
    multiplicar_matriz(&mat);
    
    printf("\nMATRIZ RESULTANTE: ");
    for(i=0;i<tam;i++){
        printf("\n");
        for(j=0;j<tam;j++){
            printf(" %d ",mat[i][j]);
        }
    }
    
    return (0);
}

