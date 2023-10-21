#include <stdio.h>
#include <stdlib.h>

#define tam 8

int main() {

    int i,j,cont=0,mat[tam][tam];
    
    printf("Preencha a matriz:");
    for(i=0;i<tam;i++){
        printf("\nLinha %d:\n",i+1);
        for(j=0;j<tam;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(mat[i][j]!=mat[j][i]){
                cont++;
            }
        }
    }
    if(cont==0){
        printf("\n\nMATRIZ SIMÉTRICA\n\n");
    }else{
        printf("\n\nMATRIZ NÃO SIMÉTRICA\n\n");
    }
    
    return (0);
}

