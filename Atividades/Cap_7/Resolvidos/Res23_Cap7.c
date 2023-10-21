#include <stdio.h>
#include <stdlib.h>

#define lin 4
#define col 5

int main() {

    int i,j,vendat,vendav[col],vendas[lin],mes[lin][col];
    
    for(i=0;i<col;i++){
        vendav[i]=0;
        vendas[i]=0;
    }
    vendat=0;
    printf("Digite o número de vendas:\n");
    for(i=0;i<lin;i++){
        printf("SEMANA %d:\n",i+1);
        for(j=0;j<col;j++){
            printf("Vendedor %d: ",j+1);
            scanf("%d",&mes[i][j]);
            
            vendas[i]+=mes[i][j];
            vendav[j]+=mes[i][j];
            vendat+=mes[i][j];
            
        }
    }
    printf("\nTotal de vendas do mês de cada vendedor:");
    for(i=0;i<col;i++){
        printf("\nVendedor %d: %d",i+1,vendav[i]);
    }
    printf("\n\nTotal de vendas de cada semana:");
    for(i=0;i<lin;i++){
        printf("\nSemana %d: %d",i+1,vendas[i]);
    }
    printf("\n\nTotal de vendas do mês: %d\n",vendat);
    
    return (0);
}

