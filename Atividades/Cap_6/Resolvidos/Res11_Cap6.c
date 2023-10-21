#include <stdio.h>
#include <stdlib.h>

#define tam 12

int main() {

    int maior_mes,menor_mes,i,cont=0;
    float maior,menor,mes[tam];
    
    for(i=0;i<tam;i++){
        
        printf("Digite a temperatura média do mês %d: ",i+1);
        scanf("%f",&mes[i]);
        
        if(cont==0){
            maior=mes[i];
            menor=mes[i];
            maior_mes=i;
            menor_mes=i;
            cont++;
        }else{
            if(mes[i]>maior){
                maior=mes[i];
                maior_mes=i;
            }
            if(mes[i]<menor){
                menor=mes[i];
                menor_mes=i;
            }
        }
    }
    
    printf("\nMaior temperatura: %.2f\nMenor temperatura: %.2f\n",maior,menor);
    
    switch(maior_mes){
        
        case 0:
            printf("Mês com maior temperatura: Janeiro\n");
            break;
        case 1:
            printf("Mês com maior temperatura: Fevereiro\n");
            break;  
        case 2:
            printf("Mês com maior temperatura: Março\n");
            break;    
        case 3:
            printf("Mês com maior temperatura: Abril\n");
            break;    
        case 4:
            printf("Mês com maior temperatura: Maio\n");
            break;    
        case 5:
            printf("Mês com maior temperatura: Junho\n");
            break;    
        case 6:
            printf("Mês com maior temperatura: Julho\n");
            break;    
        case 7:
            printf("Mês com maior temperatura: Agosto\n");
            break;    
        case 8:
            printf("Mês com maior temperatura: Setembro\n");
            break;    
        case 9:
            printf("Mês com maior temperatura: Outubro\n");
            break;
        case 10:
            printf("Mês com maior temperatura: Novembro\n");
            break;
        case 11:
            printf("Mês com maior temperatura: Dezembro\n");
            break;    
    }
    switch(menor_mes){
        
        case 0:
            printf("Mês com menor temperatura: Janeiro\n");
            break;
        case 1:
            printf("Mês com menor temperatura: Fevereiro\n");
            break;  
        case 2:
            printf("Mês com menor temperatura: Março\n");
            break;    
        case 3:
            printf("Mês com menor temperatura: Abril\n");
            break;    
        case 4:
            printf("Mês com menor temperatura: Maio\n");
            break;    
        case 5:
            printf("Mês com menor temperatura: Junho\n");
            break;    
        case 6:
            printf("Mês com menor temperatura: Julho\n");
            break;    
        case 7:
            printf("Mês com menor temperatura: Agosto\n");
            break;    
        case 8:
            printf("Mês com menor temperatura: Setembro\n");
            break;    
        case 9:
            printf("Mês com menor temperatura: Outubro\n");
            break;
        case 10:
            printf("Mês com menor temperatura: Novembro\n");
            break;
        case 11:
            printf("Mês com menor temperatura: Dezembro\n");
            break;    
    }
    
    return (0);
}

