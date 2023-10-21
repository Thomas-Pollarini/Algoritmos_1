#include <stdio.h>
#include <stdlib.h>

#define lin 12
#define col 4

int main() {

    int i,j,vendat=0,vendam[lin],venda[lin][col];
    char mes[lin][20];

    printf("Preencha o com o número de vendas:\n");
    for(i=0;i<lin;i++){
        vendam[i]=0;
        printf("Digite o nome do mês: ");
        scanf("%s",&mes[i]);
        for(j=0;j<col;j++){
            printf("Semana %d: ",j+1);
            scanf("%d",&venda[i][j]);
            
            vendam[i]+=venda[i][j];
            vendat+=venda[i][j];
        }
    }
    printf("Total vendido em cada mês:\n");
    for(i=0;i<lin;i++){
        printf("%s: %d\n",mes[i],vendam[i]);
    }
    printf("Total vendido em cada semana:\n");
    for(i=0;i<lin;i++){
        printf("%s:\n",mes[i]);
        for(j=0;j<col;j++){
            printf("Semana %d: %d\n",j+1,venda[i][j]);
        }
    }
    printf("Total vendido no ano: %d",vendat);
    
    return (0);
}

