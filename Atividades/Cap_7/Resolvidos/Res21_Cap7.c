#include <stdio.h>
#include <stdlib.h>



int main() {

    int i,j,soma,cont,tam,mat[100][100];
    
    printf("Digite a dimensão da matriz: ");
    scanf("%d",&tam);
    
    printf("Preencha a matriz:\n");
    for(i=0;i<tam;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<tam;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    soma=0;
    cont=0;
    i=1;
    j=tam-1;
    while(i<=tam-1){
        while(j>=(tam-1)-cont){
            printf(" %d +",mat[i][j]);
            soma+=mat[i][j];
            j--;
        }
        cont++;
        i++;
        j=tam-1;
    }
    printf("= %d",soma);
    
    
    
    
    /*printf("\nMATRIZ:");
    for(i=0;i<tam;i++){
        printf("\nLinha %d: ",i);
        for(j=0;j<tam;j++){
            printf(" %d ",mat[i][j]);
        }
    }
    */
    
    
    return (0);
}

