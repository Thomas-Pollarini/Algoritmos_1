#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,j,mat[tam][tam];
    float media=0;

    printf("Preencha a matriz:\n");
    for(i=0;i<tam;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<tam;j++){
            scanf("%d",&mat[i][j]);
            
            if(i==j){
                media+=mat[i][j];
            }
            
        }
    }

    printf("\nMédia dos elementos da diagonal principal: %.2f\n",media/tam);
    
    return (0);
}

