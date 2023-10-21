#include <stdio.h>
#include <stdlib.h>

#define tam1 15
#define tam2 10


int main() {
    
    int i,j,cont,log[tam1],prog[tam2],vet[tam2];
    
    printf("Alunos que estudam lógica:\n");
    for(i=0;i<tam1;i++){
        printf("Digite o número de mátricula: ");
        scanf("%d",&log[i]);
    }
    printf("Alunos que estudam Linguagem de programação:\n");
    for(i=0;i<tam2;i++){
        printf("Digite o número de mátricula: ");
        scanf("%d",&prog[i]);
    }
    cont=0;
    for(i=0;i<tam2;i++){
        for(j=0;j<tam1;j++){
            if(prog[i]==log[j]){
                vet[cont]=prog[i];
                cont++;
            }
        }
    }
    printf("Alunos mátriculados nas duas matérias: ");
    for(i=0;i<cont;i++){
        printf(" %d ",vet[i]);
    }
    
    
    return (0);
}

