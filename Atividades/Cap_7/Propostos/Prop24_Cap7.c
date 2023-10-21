#include <stdio.h>
#include <stdlib.h>

#define lin 4
#define col 5

int main() {

    int i,j,cont=0,vet[col],mat[lin][col];

    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);

            if(i==0){
                vet[j]=0;
            }
            vet[j]+=mat[i][j];
            
            if(i==lin-1 && vet[j]>10){
                cont++;
            }
        }
    }
    if(cont==0){
        printf("\nNenhum elemento do vetor é maior que 10.\n");
    }else{
        printf("\nVetor: ");
        for(i=0;i<col;i++){
            if(vet[i]>10){
                printf(" %d ",vet[i]);
            }
        }
    }
    
    
    return (EXIT_SUCCESS);
}

