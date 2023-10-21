#include <stdio.h>
#include <stdlib.h>

#define lin 3
#define col 3

int main() {

    int i,j,cont,maior,posl,posc,ponto,linha,coluna[lin],menor[lin],mat[lin][col];
    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        printf("Linha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
            
            if(j==0){
                menor[i]=mat[i][j];
                coluna[i]=j;
            }else{
                if(mat[i][j]<menor[i]){
                    menor[i]=mat[i][j];
                    coluna[i]=j;
                }
            }
        }
    }
    cont=0;
    for(j=0;j<lin;j++){
        for(i=0;i<lin;i++){
            if(i==0){
                maior=mat[i][coluna[j]];
                linha=i;
            }else{
                if(mat[i][coluna[j]]>maior){
                    maior=mat[i][coluna[j]];
                    linha=i;
                }
            }
        }
        if(menor[j]==maior){
            ponto=maior;
            cont++;
            posl=linha;
            posc=coluna[j];
        }
    }
    
    if(cont==0){
        printf("\nNão existe ponto de sela nesta matriz\n");
    }else{
        printf("\nPonto de sela: %d\nPosição: [%d][%d] \n",ponto,posl,posc);
    }
    
    return (0);
}

