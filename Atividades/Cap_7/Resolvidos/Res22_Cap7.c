#include <stdio.h>
#include <stdlib.h>

#define lin 5
#define col 3

int main() {

    int i,j,toti[lin-1],codma,codme,maior,menor,custop[col],custoa[lin-1],prod[lin][col];
    
    
    for(i=0;i<lin-1;i++){
        toti[i]=0;
        custop[i]=0;
        custoa[i]=0;
    }
    printf("Digite a quantidade de produtos:\n");
    for(i=0;i<lin;i++){
        if(i!=lin-1){
            printf("Armazém %d:\n",i+1);
        }    
        for(j=0;j<col;j++){
            if(i!=lin-1){
                printf("Produto %d: ",j+1);
                scanf("%d",&prod[i][j]);
                
                toti[i]+=prod[i][j];
                custop[j]+=prod[i][j];
                if(i==0 && j==1){
                    maior=prod[i][j];
                    codma=i;
                }else{
                    if(j==1 && prod[i][j]>maior){
                        maior=prod[i][j];
                        codma=i;
                    }
                }
            }else{
                printf("Valor do produto %d: ",j+1);
                scanf("%d",&prod[i][j]);
                
                custop[j]*=prod[i][j];
            }
        }
        if(i==0){
            menor=toti[i];
            codme=i;
        }else{
            if(toti[i]<menor){
                menor=prod[i][j];
                codme=i;
            }
        }    
    }
    for(i=0;i<lin-1;i++){
        for(j=0;j<col;j++){
            custoa[i]+=(prod[i][j]*prod[lin-1][j]);
        }
    }
    
    
    printf("\n\nTOTAL DE PRODUTOS EM CADA ARMAZÉM:\n");
    for(i=0;i<lin-1;i++){
        printf("Armazém %d: %d\n",i+1,toti[i]);
    }
    printf("ARMAZÉM COM MAIOR ESTOQUE DO PRODUTO 2: Armazém %d\n",codma+1);
    printf("ARMAZÉM COM MENOR ESTOQUE: Armazém %d\n",codme+1);
    printf("CUSTO TOTAL DE CADA PRODUTO:\n");
    for(i=0;i<col;i++){
        printf("Produto %d: %d\n",i+1,custop[i]);
    }
    printf("CUSTO TOTAL DE CADA ARMAZÉM:\n");
    for(i=0;i<lin-1;i++){
        printf("Armazém %d: %d\n",i+1,custoa[i]);
    }
    return (0);
}

