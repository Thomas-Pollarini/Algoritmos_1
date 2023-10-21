#include <stdio.h>
#include <stdlib.h>

#define loja 8
#define prod 4
#define col 40


int main() {

    int i,j;
    float vlr[loja][prod];
    char nloja[loja][col],nprod[prod][col];
    
    for(i=0;i<loja;i++){
        printf("Digite o nome da loja: ");
        scanf("%s",&nloja[i]);
    }
    for(i=0;i<prod;i++){
        printf("Digite o nome do produto: ");
        scanf("%s",&nprod[i]);
    }
    for(i=0;i<loja;i++){
        printf("Loja: %s\n",nloja[i]);
        for(j=0;j<prod;j++){
            printf("Digite o preço do %s:",nprod[j]);
            scanf("%f",&vlr[i][j]);
        }
    }
    printf("Produtos com preço menor que R$120:\n");
    for(i=0;i<loja;i++){
        for(j=0;j<prod;j++){
            if(vlr[i][j]<120){
                printf("%s-%s\n",nprod[j],nloja[i]);
            }
        }
    }
    
}

