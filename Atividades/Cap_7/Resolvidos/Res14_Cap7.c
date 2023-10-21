#include <stdio.h>
#include <stdlib.h>

#define tam 5

int main() {

    int i,j;
    float comb,dist[tam][tam];
    char cid[tam][40];
    
    for(i=0;i<tam;i++){
        printf("Digite o nome da cidade %d: ",i);
        scanf("%s",&cid[i]);
    }
    
    printf("\nDigite a distância entre:\n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(i==j){
                dist[i][j]=0;
            }else{
                printf("Cidade %d a cidade %d:",i,j);
                scanf("%f",&dist[i][j]);
            }
        }
    }
    printf("Digite o consumo de combustível do veículo: ");
    scanf("%f",&comb);
    
    printf("Percursos que não ultrapassam 250 km (origem---destino):\n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(dist[i][j]<=250 && dist[i][j]>0){
                printf("%s----%s\n",cid[i],cid[j]);
            }
        }
    }
     printf("\nTODOS OS PERCURSOS:\n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(i==j){
            }else{
                printf("%s---%s / Qntd de combustível: %.2fL\n",cid[i],cid[j],(dist[i][j]/comb));
            }
        }
    }    
    
    return (0);
}

