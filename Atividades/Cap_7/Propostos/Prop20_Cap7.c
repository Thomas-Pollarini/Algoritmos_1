#include <stdio.h>
#include <stdlib.h>

#define tam 5

int main() {

    int i,j;
    float maior,mat[tam][tam];
    
    printf("Preencha a matriz:\n");
    for(i=0;i<tam;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<tam;j++){
            scanf("%f",&mat[i][j]);
            if(i==0 && j==0){
                maior=mat[i][j];
            }else{
                if(mat[i][j]>maior){
                    maior=mat[i][j];
                }
            }
            
        }
    }
    printf("\nMATRIZ RESULTANTE:");
    for(i=0;i<tam;i++){
        printf("\nLinha %d: ",i);
        for(j=0;j<tam;j++){
            if(i==j){
                printf(" %.3f ",mat[i][j]*maior);
            }else{
                printf(" %.3f ",mat[i][j]);
            }
        }
    }
    
    return (0);
}

