#include <stdio.h>
#include <stdlib.h>

#define tam 4

int main() {

    int i,j,cont=0,diagp,diags,somal[tam],somac[tam],mat[tam][tam];
    
    printf("Preencha a matriz:");
    for(i=0;i<tam;i++){
        printf("\nLinha %d:\n",i+1);
        for(j=0;j<tam;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    diagp=0;
    diags=0;
    for(i=0;i<tam;i++){
        somal[i]=0;
        somac[i]=0;
        for(j=0;j<tam;j++){
            somal[i]+=mat[i][j];
            somac[i]+=mat[j][i];
        }
        diagp+=mat[i][i];
        diags+=mat[(tam-1)-i][i];
    }
    
    if(diagp!=diags || somal[0]!=somac[0]){
        printf("\nMATRIZ NÃO É UM QUADRADO MÁGICO\n");
        return(0);
    }else{
        for(i=0;i<tam;i++){
            if(somal[0]!=somal[i]||somac[0]!=somac[i]){
                cont++;
            }
        }
        if(cont!=0){
            printf("\nMATRIZ NÃO É UM QUADRADO MÁGICO\n");
        }else{
            printf("\nMATRIZ É UM QUADRADO MÁGICO\n");
        }
     }
    
    return (0);
}

