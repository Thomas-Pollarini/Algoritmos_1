#include <stdio.h>
#include <stdlib.h>

#define tam 5

int main() {

    int i,j,cont;
    float mat[tam][tam];
    
    printf("Preencha a matriz:\n");
    for(i=0;i<tam;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<tam;j++){
            scanf("%f",&mat[i][j]);

            
        }
    }
    printf("\nMATRIZ RESULTANTE:");
    for(i=0;i<tam;i++){
        printf("\nLinha %d: ",i);
        cont=i;
        for(j=0;j<tam;j++){
            printf(" %.3f ",mat[i][j]*mat[cont][cont]);
        }
    }
    
    return (0);
}
