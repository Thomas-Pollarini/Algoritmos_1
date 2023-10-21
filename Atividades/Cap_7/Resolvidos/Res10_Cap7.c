#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,j,aux,mat[tam][tam];
    
    printf("Preencha a matriz:");
    for(i=0;i<tam;i++){
        printf("\nLinha %d:\n",i+1);
        for(j=0;j<tam;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    
    for(i=0;i<tam;i++){
        aux=mat[1][i];
        mat[1][i]=mat[7][i];
        mat[7][i]=aux;
    }
    for(i=0;i<tam;i++){
        aux=mat[i][3];
        mat[i][3]=mat[i][9];
        mat[i][9]=aux;
    }
    for(i=0;i<tam;i++){
        aux=mat[i][i];
        mat[i][i]=mat[9-i][i];
        mat[9-i][i]=aux;
    }
    for(i=0;i<tam;i++){
        aux=mat[i][i];
        mat[i][i]=mat[9-i][i];
        mat[9-i][i]=aux;
    }
    for(i=0;i<tam;i++){
        aux=mat[4][i];
        mat[4][i]=mat[i][9];
        mat[i][9]=aux;
    }
    
    printf("\nMatriz resultante:");
    for(i=0;i<tam;i++){
        printf("\nLinha %d:",i+1);
        for(j=0;j<tam;j++){
            printf(" %d ",mat[i][j]);
        }
    }
    
    return (0);
}

