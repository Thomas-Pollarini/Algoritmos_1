#include <stdio.h>
#include <stdlib.h>

#define tam 12

void maior(float *media){
    
    int i,cod;
    float maior;
    
    for(i=0;i<tam;i++){
        if(i==0){
            maior=media[i];
            cod=i;
        }else{
            if(media[i]>maior){
                maior=media[i];
                cod=i;
            }
        }
    }
    printf("\nMaior temperatura: %.2f\nMês: ",maior);
    switch(cod){
        case 0:
            printf("1-Janeiro\n");
            break;
        case 1:
            printf("2-Fevereiro\n");
            break;
        case 2:
            printf("3-Março\n");
            break;
        case 3:
            printf("4-Abril\n");
            break;
        case 4:
            printf("5-Maio\n");
            break;    
        case 5:
            printf("6-Junho\n");
            break;    
        case 6:
            printf("7-Julho\n");
            break;    
        case 7:
            printf("8-Agosto\n");
            break;    
        case 8:
            printf("9-Setembro\n");
            break;    
        case 9:
            printf("10-Outubro\n");
            break;    
        case 10:
            printf("11-Novembro\n");
            break;
        case 11:
            printf("12-Dezembro\n");
            break;    
    }
    
}

void menor(float *media){
   
    int i,cod;
    float menor;
    
    for(i=0;i<tam;i++){
        if(i==0){
            menor=media[i];
            cod=i;
        }else{
            if(media[i]<menor){
                menor=media[i];
                cod=i;
            }
        }
    }
    printf("\nMenor temperatura: %.2f\nMês: ",menor);
    switch(cod){
        case 0:
            printf("1-Janeiro\n");
            break;
        case 1:
            printf("2-Fevereiro\n");
            break;
        case 2:
            printf("3-Março\n");
            break;
        case 3:
            printf("4-Abril\n");
            break;
        case 4:
            printf("5-Maio\n");
            break;    
        case 5:
            printf("6-Junho\n");
            break;    
        case 6:
            printf("7-Julho\n");
            break;    
        case 7:
            printf("8-Agosto\n");
            break;    
        case 8:
            printf("9-Setembro\n");
            break;    
        case 9:
            printf("10-Outubro\n");
            break;    
        case 10:
            printf("11-Novembro\n");
            break;
        case 11:
            printf("12-Dezembro\n");
            break;    
    }
}

int main() {
    
    int i;
    float media[tam];

    printf("Digite a temperatura de acordo com o mês:\n");
    for(i=0;i<tam;i++){
        printf("Mês %d: ",i+1);
        scanf("%f",&media[i]);
    }
    
    maior(&media);
    menor(&media);
    
    return (0);
}

