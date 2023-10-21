#include <stdio.h>
#include <stdlib.h>


int main() {

    
    int idade,qnt1=0,qnt2=0,cont1=0;
    float peso,alt,mediai=0,perca=0;
    char olho,cab;
    
    for(int i=0;i<6;i++){
        
        printf("Digite sua idade: ");
        scanf("%d",&idade);
        printf("Digite seu peso: ");
        scanf("%f",&peso);
        printf("Digite sua altura: ");
        scanf("%f",&alt);
        printf("Digite a cor do seu olho: ");
        scanf(" %c",&olho);
        printf("Digite a cor do seu cabelo: ");
        scanf(" %c",&cab);
        
        if(idade>50 && peso<60){
            qnt1++;
        }
        if(alt<1.5){
            mediai=mediai+idade;
            cont1++;
        }
        if(olho==65){   //A=65
            perca++;
        }
        if(cab==82 && olho!=65){
            qnt2++;
        }
    }
    mediai=mediai/cont1;
    perca=(perca*100.0)/6;
         
    printf("Quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: %d\n"
            "Média das idades das pessoas com altura inferior a 1,50 m: %.2f\n"
            "Porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %.2f%%\n"
            "Quantidade de pessoas ruivas e que não possuem olhos azuis: %d\n",qnt1,mediai,perca,qnt2);
            
    return (0);
}

