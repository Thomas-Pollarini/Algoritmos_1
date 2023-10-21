#include <stdio.h>
#include <stdlib.h>

#define tam 20

int main() {

    int i,dado[tam],num[7];
    
    for(i=0;i<tam;i++){
        printf("Digite o número sorteado: ");
        scanf("%d",&dado[i]);
    }
    for(i=0;i<7;i++){
        num[i]=0;
    }
    for(i=0;i<tam;i++){
        num[dado[i]]++;
    }
    for(i=1;i<7;i++){
    printf("O número %d foi sorteado %d vezes\n",i,num[i]);
    }
    
    return (0);
}

