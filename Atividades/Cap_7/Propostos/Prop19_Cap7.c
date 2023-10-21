#include <stdio.h>
#include <stdlib.h>

#define lin 8
#define col 6

int main() {

    int i,j,cont=0,media[lin],mat[lin][col];

    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d:\n",i);
        media[i]=0;
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
           
            if(i%2==0){
                media[i]+=mat[i][j];
            }
            
        }
    }
    printf("\nMédia dos elementos:\n");
    for(i=0;i<lin;i+=2){
        printf("Linha %d: %d\n",i,media[i]/col);
        
    }
    
    return (0);
}

