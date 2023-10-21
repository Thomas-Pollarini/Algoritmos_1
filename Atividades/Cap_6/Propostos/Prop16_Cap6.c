#include <stdio.h>
#include <stdlib.h>

#define tam 5

int main() {

    int i,cont1=0,cont2=0,cod[tam],prod[i];
    float soma=0,cont3=0,vlr[tam];
    
    for(i=0;i<tam;i++){
        printf("Digite o código do produto: ");
        scanf("%d",&cod[i]);
        printf("Digite o preço do produto: ");
        scanf("%f",&vlr[i]);
        
        
        if(vlr[i]< 50.0){
            cont1++;
        }else{
            if(vlr[i]>=50 && vlr[i]<=100){
                prod[cont2]=cod[i];
                cont2++;
            }else{
              soma+=vlr[i];
              cont3++;
            }    
        }    
    }
    soma=soma/cont3;
    printf("\nQuantidade de produtos com preço inferior a R$ 50,00: %d\nMédia dos preços dos produtos com preço superior a R$ 100,00: %.2f\n"
            "Códigos dos produtos com preço entre R$ 50,00 e R$ 100,00: ",cont1,soma);
    for(i=0;i<cont2;i++){
        printf(" %d ",prod[i]);
    }    
        
    return (0);
}
