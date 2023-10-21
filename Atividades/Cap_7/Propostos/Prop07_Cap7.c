#include <stdio.h>
#include <stdlib.h>

#define tam 4
#define tam2 6

int main() {

    int i,j,soma[tam][tam2],m[tam][tam2],n[tam2][tam];
    
    printf("Preencha a matriz M:\n");
    for(i=0;i<tam;i++){
        printf("Linha %d:\n");
        for(j=0;j<tam2;j++){
            scanf("%d",&m[i][j]);
            
            soma[i][j]=m[i][j];
            
        }
    }
    printf("Preencha a matriz N:\n");
    for(i=0;i<tam;i++){
        printf("Coluna %d:\n");
        for(j=0;j<tam2;j++){
            scanf("%d",&n[j][i]);
            
            soma[i][j]+=n[j][i];
            
        }
    }      
    printf("\n\nRESULTADO:");
    for(i=0;i<tam;i++){
        printf("\nLinha %d:",i);
        for(j=0;j<tam2;j++){
            printf(" %d ",soma[i][j]);
        }
    }
    
    return (0);
}

