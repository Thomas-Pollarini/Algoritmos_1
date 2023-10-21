#include <stdio.h>
#include <stdlib.h>

#define tam 10
#define tam2 5

int main(){
    
    int i,j,soma,cont1=0,cont2=0,cont3=0,vet1[tam],vet2[tam2],res1[tam],res2[tam];
    
    
    printf("Preencha o primeiro vetor: \n");
    for(i=0;i<tam;i++){
        printf("Digite  um número: ");
        scanf("%d",&vet1[i]);
    }
    
    printf("Preencha o segundo vetor: \n");
    for(i=0;i<tam2;i++){
        printf("Digite  um número: ");
        scanf("%d",&vet2[i]);
    }
    
    for(i=0;i<tam;i++){
        if(vet1[i]%2==0){
            soma=vet1[i];
            for(j=0;j<tam2;j++){
                soma=soma+vet2[j];
            }
            res1[cont1]=soma;
            cont1++;
        }else{
            cont2=0;
            for(j=0;j<tam2;j++){
                if(vet1[i]%vet2[j]==0){
                    cont2++;
                }
                
            }
            res2[cont3]=cont2;
            cont3++;
            
        }
    }    
    printf("Vetor resultante 1: ");
    for(i=0;i<cont1;i++){
        printf(" %d ",res1[i]);
    }
    printf("\nVetor resultante 2: ");
    for(i=0;i<cont3;i++){
        printf(" %d ",res2[i]);
    }
    
    return (0);
}

