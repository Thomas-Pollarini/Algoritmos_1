#include <stdio.h>
#include <stdlib.h>

#define tam 6

int i,j;

int menor_diagonal(int mat[][tam]){
    
    int menor;
    
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            
            if(i+j==tam-1 && i==0){
                menor=mat[i][j];
            }
            else{
                if(i+j==tam-1 && mat[i][j]<menor){
                    menor=mat[i][j];
                }
            }
            
        }
    }
    
    return menor;    
}

int main() {

    int menor,mat[tam][tam];
    
    printf("preencha a matriz:\n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("Posição[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    
    menor=menor_diagonal(&mat);
    
    printf("\nMenor elemento da diagonal secundária: %d\n",menor);
    
    return (0);
}

