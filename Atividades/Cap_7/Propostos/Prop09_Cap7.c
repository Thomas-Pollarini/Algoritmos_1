#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main() {

    int i,j,num;
    float mat[lin][col];
    
    printf("Digite o número que será multiplicado: ");
    scanf("%d",&num);
    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%f",&mat[i][j]);
            
            mat[i][j]*=num;
        }
    }
    printf("\n\nMATRIZ RESULTANTE:");
    for(i=0;i<lin;i++){
        printf("\nLinha %d:",i);
        for(j=0;j<col;j++){
            printf(" %.3f ",mat[i][j]);
        }
    }
    
    
    return (0);
}

