#include <stdio.h>
#include <stdlib.h>

#define lin 6
#define col 3

int main() {

    int i,j,poslma,poscma,poslme,poscme,maior,menor,mat[lin][col];
    
    
    printf("Preencha a mamtriz:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
            
            if(i==0 && j==0){
                maior=mat[i][j];
                poslma=i;
                poscma=j;
                menor=mat[i][j];
                poslme=i;
                poscme=j;
            }else{
                if(mat[i][j]>maior){
                    maior=mat[i][j];
                    poslma=i;
                    poscma=j;
                }
                if(mat[i][j]<menor){
                    menor=mat[i][j];
                    poslme=i;
                    poscme=j;
                }
            }
        }
    }
    printf("\nMaior elemento da matriz: %d [%d][%d]\n",maior,poslma,poscma);
    printf("Menor elemento da matriz: %d [%d][%d]\n",menor,poslme,poscme);
    return (0);
}

