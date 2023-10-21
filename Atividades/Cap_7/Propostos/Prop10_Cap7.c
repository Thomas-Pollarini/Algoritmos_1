#include <stdio.h>
#include <stdlib.h>

#define tam 5

int main() {

    int i,j,somal=0,somac=0,somadp=0,somads=0,somat=0,mat[tam][tam];
    
    
    printf("Preencha a matriz:\n");
    for(i=0;i<tam;i++){
        printf("Linha %d:\n",i+1);
        for(j=0;j<tam;j++){
            scanf("%d",&mat[i][j]);
            
            somat+=mat[i][j];
            if(i==3){
                somal+=mat[3][j];
            }
            if(j==1){
                somac+=mat[i][1];
            }
            if(i==j){
                somadp+=mat[i][j];
            }
            if(i+j==tam-1){
                somads+=mat[i][j];
            }
        }
    }
    printf("\nSoma dos elementos da linha 4: %d\nSoma dos elementos da coluna 2: %d\n"
            "Soma dos elementos da diagonal principal: %d\nSoma dos elementos da diagonal secundária: %d\n"
            "Soma de todos os elementos da matriz: %d\n",somal,somac,somadp,somads,somat);
    
    return (0);
}

