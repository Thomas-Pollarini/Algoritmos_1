#include <stdio.h>
#include <stdlib.h>

#define tam 8

int main() {

    int i,vet1[tam];
    float vet2[tam],soma=0;
    
    for(i=0;i<tam;i++){
        printf("Digite o código do %dº aluno: ",i+1);
        scanf("%d",&vet1[i]);
        printf("Digite a nota do %dº aluno: ",i+1);
        scanf("%f",&vet2[i]);
        
        soma+=vet2[i];
    }
    printf("Relatórios de nota: ");
    for(i=0;i<tam;i++){
        printf("\ncód: %d  nota: %.2f",vet1[i],vet2[i]);
    }
    soma=soma/tam;
    printf("\nMédia da classe= %.2f",soma);
    
    
    return (0);
}

