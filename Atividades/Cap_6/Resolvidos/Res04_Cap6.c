#include <stdio.h>
#include <stdlib.h>

#define tam 8


int main() {

    int num[tam],pos[tam],neg[tam],cont1=0,cont2=0;
    
    printf("Digite os valores do vetor: \n");
    int i;
    for(i=0;i<tam;i++){
        printf("Posição %d: ",i);
        scanf("%d",&num[i]);
    
        if(num[i]>=0){
            pos[cont1]=num[i];
            cont1++;
        }    
        if(num[i]<0){
            neg[cont2]=num[i];
            cont2++;
        }     
    }
    if(cont1==0){
        printf("Vetor de números positivos está vazio.\n");
    }else{
        printf("Vetor positivo: ");
        
        for(i=0;i<cont1;i++){
            printf(" %d ",pos[i]);            
        }
    }
    if(cont1==0){
        printf("\nVetor de números negativos está vazio.\n");
    }else{
        printf("Vetor negativo: ");
        for(i=0;i<cont2;i++){
            printf(" %d ",neg[i]);            
        }
    }
    
    
    
    
    return (0);
}

