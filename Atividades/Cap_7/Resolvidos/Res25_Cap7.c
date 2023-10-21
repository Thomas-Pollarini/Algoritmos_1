#include <stdio.h>
#include <stdlib.h>

#define prod 5
#define loja 3

int main() {

    int i,j,num,maior,totl[loja],totp[prod],bi[prod][loja];
    
    printf("Digite o número de vendas do primeiro mês:\n");
    for(i=0;i<prod;i++){
        printf("PRODUTO %d:\n",i+1);
        for(j=0;j<loja;j++){
            totl[j]=0;
            printf("Loja %d: ",j+1);
            scanf("%d",&bi[i][j]);
        }
    }
    printf("Digite o número de vendas do segundo mês:\n");
    for(i=0;i<prod;i++){
        printf("PRODUTO %d:\n",i+1);
        totp[i]=0;
        for(j=0;j<loja;j++){
            printf("Loja %d: ",j+1);
            scanf("%d",&num);
            bi[i][j]+=num;
            
            totl[j]+=bi[i][j];
            totp[i]+=bi[i][j];
            if(i==0 && j==0){
                maior=bi[i][j];
            }else{
                if(bi[i][j]>maior){
                    maior=bi[i][j];
                }
            }
        }
    }
    printf("\nVENDAS DO BIMESTRE:\n");
    for(i=0;i<prod;i++){
        printf("PRODUTO %d:\n",i+1);
        for(j=0;j<loja;j++){
            printf("Loja %d: %d\n",j+1,bi[i][j]);
        }
    }
    printf("\nMaior venda do bimestre: %d\n",maior);
    printf("\nTotal vendido, por loja, no bimestre:\n");
    for(i=0;i<loja;i++){
        printf("Loja %d: %d\n",i+1,totl[i]);
    }
    printf("\nTotal vendido de cada produto no bimestre:\n");
    for(i=0;i<prod;i++){
        printf("Produto %d: %d\n",i+1,totp[i]);
    }
    return (0);
}

