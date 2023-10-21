#include <stdio.h>
#include <stdlib.h>

#define lin 2
#define col 4

int main() {

    int i,j,cont[lin],mat[lin][col];
    float media=0,cont2=0;
    
    printf("Preencha a mamtriz:\n");
    for(i=0;i<lin;i++){
        cont[i]=0;
        printf("Linha %d:\n",i+1);
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
            
            if(mat[i][j]%2==0){
                media+=mat[i][j];
                cont2++;
            }
            if(mat[i][j]>12 && mat[i][j]<20){
                cont[i]++;
            }
        }
    }
    printf("\nQuantidade de números entre 12 e 20 em cada linha:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d: %d\n",i+1,cont[i]);
    }        
    printf("\nMédia dos elementos pares da matriz: %.2f\n",media/cont2);
    return (0);
}

