#include <stdio.h>
#include <stdlib.h>

#define lin 5
#define col 4

int main() {

    int i,j;
    float trans[lin],vlr[lin][col],imp[lin][col];
    char prod[lin][40];
    
    for(i=0;i<lin;i++){
        printf("Digite o nome do produto: ");
        scanf("%s",&prod[i]);
        printf("Digite o custo de transporte do produto: ");
        scanf("%f",&trans[i]);
    }
    printf("\nDigite o valor dos produtos:");
    for(i=0;i<lin;i++){
        printf("\n%s:",prod[i]);
        for(j=0;j<col;j++){
            printf("Loja %d: ",j);
            scanf("%f",&vlr[i][j]);
        }
    }
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            if(vlr[i][j]<=50){
                imp[i][j]=vlr[i][j]*0.05;
            }else{
                if(vlr[i][j]>50 && vlr[i][j]<=100){
                    imp[i][j]=vlr[i][j]*0.1;
                }else{
                    imp[i][j]=vlr[i][j]*0.2;
                }    
            }
        }
    }
    printf("\n\nRELATÓRIO:");
    for(i=0;i<lin;i++){
        printf("\n\nPRODUTO: %s",prod[i]);
        for(j=0;j<col;j++){
            printf("\nLOJA %d:\nValor do imposto: %.2f\nCusto de transporte: %.2f\n"
                    "Preço do produto: %.2f\nValor final: %.2f\n",j,imp[i][j],trans[i],vlr[i][j],(trans[i]+imp[i][j]+vlr[i][j]));
        }
    }
    
    
    
    return (0);
}

