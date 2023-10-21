#include <stdio.h>
#include <stdlib.h>

#define tam 5

int main() {

    int i,j;
    float soma=0,mat[tam][tam];
    
    printf("Preencha a matriz:\n");
    for(i=0;i<tam;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<tam;j++){
            scanf("%f",&mat[i][j]);
            if(i+j==tam-1){
                soma+=mat[i][j];
            }
            
        }
    }
    printf("\nSoma dos elementos da diagonal secundária: %.3f\n",soma);
    return (0);
}

