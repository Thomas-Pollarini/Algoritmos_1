#include <stdio.h>
#include <stdlib.h>

#define v1 10
#define v2 5
#define lin 4
#define col 3

int main() {

    int i,j,maior,menor,somap[lin],cont[col],vet[v1],vet2[v2],mat[lin][col];
    
    printf("Preencha o primeiro vetor:\n");
    for(i=0;i<v1;i++){
        scanf("%d",&vet[i]);
        if(i==0){
            maior=vet[i];
        }else{
            if(vet[i]>maior){
                maior=vet[i];
            }
        }
    }
    
    printf("Preencha o segundo vetor:\n");
    for(i=0;i<v2;i++){
        scanf("%d",&vet2[i]);
        if(i==0){
            menor=vet2[i];
        }else{
            if(vet2[i]<menor){
                menor=vet2[i];
            }
        }
    }
    
    for(i=0;i<col;i++){
        cont[i]=0;
    }
    
    printf("Preencha a matriz:");
    for(i=0;i<lin;i++){
        printf("\nLinha %d:\n",i);
        somap[i]=0;
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
            mat[i][j]+=(maior*menor);
            
            if(mat[i][j]%2==0){
                somap[i]+=mat[i][j];
            }
            if(mat[i][j]>=1 && mat[i][j]<=5){
                cont[j]++;
            }
        }
    }
    
    printf("\nMATRIZ RESULTANTE:");
    for(i=0;i<lin;i++){
        printf("\nLinha %d: ",i);
        for(j=0;j<col;j++){
            printf(" %d ",mat[i][j]);
        }
    }
    printf("\n\nSoma dos elementos pares em cada linha:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d: %d\n",i,somap[i]);
    }
    printf("\nQuantidade de elementos entre 1 e 5 em cada coluna:\n");
    for(i=0;i<col;i++){
        printf("Coluna %d: %d\n",i,cont[i]);
    }
    
    return (0);
}

