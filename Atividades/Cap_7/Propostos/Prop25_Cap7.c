#include <stdio.h>
#include <stdlib.h>

#define lin 5
#define col 10

int main() {

    int i,j,cont=0,menor,maior,qnta[lin],qntp[col],est[lin][col];
    float vlrma,vlr[col],vlra[lin];

    printf("Digite o preço dos produtos:\n");
    for(i=0;i<col;i++){
        printf("Produto %d: ",i);
        scanf("%f",&vlr[i]);
    }
    
    
    printf("Digite a qntd de produtos em cada armazém:\n");
    for(i=0;i<lin;i++){
        qnta[i]=0;
        vlra[i]=0;
        printf("ARMAZÉM %d:\n",i);
        for(j=0;j<col;j++){
            printf("produto %d: ",j);
            scanf("%d",&est[i][j]);

            qnta[i]+=est[i][j];
            if(i==0){
                qntp[j]=0;
                if(j==0){
                    maior=est[i][j];
                    vlrma=vlr[j];
                    menor=est[i][j];
                }
            }
            if(est[i][j]>maior){
                maior=est[i][j];
                vlrma=vlr[j];
            }
            if(est[i][j]<menor){
                menor=est[i][j];
            }
            
            qntp[j]+=est[i][j];
            vlra[i]+=est[i][j]*vlr[j];
            
        }
    }
    
    printf("\nTOTAL DE PRODUTOS ESTOCADOS EM CADA ARMAZÉM:");
    for(i=0;i<lin;i++){
        printf("\nArmazém %d: %d",i,qnta[i]);
    }
    printf("\n\nTOTAL DE CADA PRODUTO ESTOCADO:");
    for(i=0;i<col;i++){
        printf("\nProduto %d: %d",i,qntp[i]);
    }
    printf("\n\nPREÇO DO PRODUTO COM MAIOR ESTOQUE ÚNICO: %.2f\nMENOR ESTOQUE: %d\n",vlrma,menor);
    printf("\nVALOR TOTAL DE CADA ARMAZÉM:\n");
    for(i=0;i<lin;i++){
        printf("Armazém %d: %.2f\n",i,vlra[i]);
    }
    
    return (0);
}

