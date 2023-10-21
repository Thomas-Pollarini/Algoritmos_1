#include <stdio.h>
#include <stdlib.h>


int main() {

    
    int idade,qnti=0,qnta=0;
    float alt,peso,mediaa=0,qntp=0;
    
    for(int i=0;i<5;i++){
        
        printf("Digite sua idade: ");
        scanf("%d",&idade);
        printf("Digite sua altura: ");
        scanf("%f",&alt);
        printf("Digite seu peso: ");
        scanf("%f",&peso);
        
        if(idade>50){
            qnti++;
        }
        if(idade>=10 && idade<=20){
            mediaa=mediaa+alt;
            qnta++;
        }
        if(peso<40){
            qntp++;
        }
        
    }
    
    mediaa=mediaa/qnta;
    qntp=(qntp*100.0)/5.0;
    
    printf("Quantidade de pessoas com idade superior a 50 anos: %d\nMédia das alturas das pessoas com idade entre 10 e 20 anos: %.2f\n"
            "Porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas: %.2f%%\n",qnti,mediaa,qntp);
    
    return (0);
}

