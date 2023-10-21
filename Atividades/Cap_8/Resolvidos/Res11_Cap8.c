#include <stdio.h>
#include <stdlib.h>

#define tam 5

int i;

char leitura(char *sexo, char *olho, char *cabelo, int *idade){
    
    for(i=0;i<tam;i++){
        printf("Digite o gênero(M/F): ");
        scanf(" %c",&sexo[i]);
        printf("Digite a cor do olho(A/C): ");
        scanf(" %c",&olho[i]);
        printf("Digite a cor do cabelo(L/P/C): ");
        scanf(" %c",&cabelo[i]);
        printf("Digite a idade: ");
        scanf("%d",&idade[i]);
    }
    
}

float media_idade(int *idade, char *olho, char *cabelo){
    
    int cont=0;
    float media=0;
    
    for(i=0;i<tam;i++){
        
        if(olho[i]=='C' && cabelo[i]=='P'){
            media+=idade[i];
            cont++;
        }
        
    }
    if(cont>0){
        media/=cont;
    }
    
    return media;
    
}

int maior_idade(int *idade){
    
    int maior;
    
    for(i=0;i<tam;i++){
        if(i==0){
            maior=idade[i];
        }else{
            if(idade[i]>maior){
                maior=idade[i];
            }
        }
    }
    
    return maior;
}

int quantidade(char *sexo, char *olho, char *cabelo, int *idade){
    
    int cont=0;
    
    for(i=0;i<tam;i++){
        
        if(sexo[i]=='F' && olho[i]=='A' && cabelo[i]=='L' && idade[i]>=18 && idade[i]<=35){
            cont++;
        }
        
    }
    
    return cont;
}

int main() {

    int cont,maior,idade[tam];
    float media;
    char sexo[tam],olho[tam],cabelo[tam];
    
    leitura(&sexo,&olho,&cabelo,&idade);
    media=media_idade(&idade,&olho,&cabelo);
    maior=maior_idade(&idade);
    cont=quantidade(&sexo,&olho,&cabelo,&idade);
    
    printf("\nMédia das idades: %.2f\nMaior idade: %d\nQuantidade de mulheres: %d\n",media,maior,cont);
    return (0);
}

