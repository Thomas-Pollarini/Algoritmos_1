#include <stdio.h>
#include <stdlib.h>

#define tam 5

int main() {

    int i;
    float km[tam],menor,cons[tam];
    char mod[tam],eco;
    
    for(i=0;i<tam;i++){
        printf("Digite o modelo do carro: ");
        scanf(" %c",&mod[i]);
        printf("Digite o consumo do carro: ");
        scanf(" %f",&cons[i]);
        
        if(i==0){
            menor=cons[i];
            eco=mod[i];
        }else{
            if(cons[i]>menor){
                menor=cons[i];
                eco=mod[i];
            }
        }
        
        km[i]=1000.0/cons[i];
    }
    for(i=0;i<tam;i++){
        printf("Litros necessários para andar 1000 km no modelo %c: %.2f\n",mod[i],km[i]);
    }
    printf("Modelo mais econômico: %c",eco);
    
    return (0);
}

