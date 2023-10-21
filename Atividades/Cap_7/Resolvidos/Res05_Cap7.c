#include <stdio.h>
#include <stdlib.h>

#define lin 4
#define col 7

int main() {

    int i,j,posc,posl;
    float menor,MINMAX,mat[lin][col];
    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%f",&mat[i][j]);
        
            if(i==0 && j==0){
                menor=mat[0][0];
                posl=0;
            }else{
                if(mat[i][j]<menor){
                    menor=mat[i][j];
                    posl=i;
                }
            }
        }
        
    }
    for(i=0;i<col;i++){
        if(i==0){
            MINMAX=mat[posl][i];
            posc=i;
        }else{
            if(mat[posl][i]>MINMAX){
                MINMAX=mat[posl][i];
                posc=i;
            }
        }
    }
    printf("\nMINMAX: %f\nPosição:[%d][%d]\n",MINMAX,posl,posc);
    
    
    return (0);
}

