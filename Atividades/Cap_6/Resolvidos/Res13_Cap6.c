#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,vet[tam],cont=0,vet2[tam],x[tam];
    
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&vet[i]);       
    }
    
    for(i=0;i<tam;i++){
        
        if(vet[i]>50){
            vet2[cont]=vet[i];
            x[cont]=i;
            cont++;
        }    
        
    }
    
    if(cont==0){
        printf("\nNenhum número no vetor é maior que 50.\n");
    }else{
        printf("\nNúmeros superiores a 50: ");
        for(i=0;i<cont;i++){
            printf(" %d ",vet2[i]);
        }
        printf("\nRespectivas possições no vetor: ");
        for(i=0;i<cont;i++){
            printf(" %d ",x[i]);
        }
    }
    
    return (0);
}

