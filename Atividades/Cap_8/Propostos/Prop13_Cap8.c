#include <stdio.h>
#include <stdlib.h>

#define tam 15

float media_sal(float *sal){
    
    int i;
    float media=0;
    
    for(i=0;i<tam;i++){
        media+=sal[i];
    }
    
    media/=tam;
    
    return media;
}

int maior_idade(int *idade){
    
    int i,maior;
    
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

int menor_idade(int *idade){
    
    int i,menor;
    
    for(i=0;i<tam;i++){
        if(i==0){
            menor=idade[i];
        }else{
            if(idade[i]<menor){
                menor=idade[i];
            }
        }
    }
    
    return menor;
}

int contador(char *sexo,int *numf, float *sal){
    
    int i,cont=0;
    
    for(i=0;i<tam;i++){
        if(sexo[i]=='F' && numf[i]==3 && sal[i]<=500){
            cont++;
        }
    }
    
    return cont;
}

int main() {

    int i,qnt,maior,menor,idade[tam],numf[tam];
    float media,sal[tam];
    char sexo[tam];
    
    for(i=0;i<tam;i++){
        printf("Digite sua idade: ");
        scanf("%d",&idade[i]);
        printf("Digite seu salário: ");
        scanf("%f",&sal[i]);
        printf("Digite seu sexo(M/F): ");
        scanf(" %c",&sexo[i]);
        printf("Digite a quantidade de filhos: ");
        scanf("%d",&numf[i]);
    }
    
    media=media_sal(&sal);
    maior=maior_idade(&idade);
    menor=menor_idade(&idade);
    qnt=contador(&sexo,&numf,&sal);
            
    printf("\nMédia dos salários: %.2f\nMaior idade: %d\nMenor idade: %d\nQnt de mulheres c/ 3 filhos que recebem até R$500: %d\n",media,maior,menor,qnt);
            
    return (0);
}

