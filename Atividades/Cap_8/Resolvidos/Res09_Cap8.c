#include <stdio.h>
#include <stdlib.h>


int maior_menor(){
    
    int i,maior,menor,vet[5];
    
    printf("Digite 5 valores:\n");
    for(i=0;i<5;i++){
        scanf("%d",&vet[i]);
        
        if(i==0){
            maior=vet[i];
            menor=vet[i];
        }else{
            if(vet[i]>maior){
                maior=vet[i];
            }
            if(vet[i]<menor){
                menor=vet[i];
            }
        }
        
    }
    printf("\nMaior valor digitado: %d\nMenor valor digitado: %d\n",maior,menor);
    
}

int main() {

    maior_menor();
    
    return (0);
}

