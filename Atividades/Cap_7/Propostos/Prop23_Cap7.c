#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 4

int main() {

    int i,j,contp=0,somai=0,mat[lin][col];
    float media=0;
    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);

            if(mat[i][j]%2==0){
                contp++;
            }else{
                somai+=mat[i][j];
            }
            media+=mat[i][j];
            
        }
    }
    printf("\nQntd de elementos pares: %d\nSoma dos elementos ímpares: %d\n"
            "Média dos elementos: %.2f\n",contp,somai,media/(lin*col));

    return (0);
}

