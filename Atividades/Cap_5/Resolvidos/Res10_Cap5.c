#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade,conti=0;
    float peso,alt,mediai=0,mediaa=0,contp=0;
    
    for(int i=0;i<5;i++){
    
        for(int j=0;j<11;j++){
    
            printf("Digite sua idade: ");
            scanf("%d",&idade);
            printf("Digite seu peso: ");
            scanf("%f",&peso);
            printf("Digite sua altura: ");
            scanf("%f",&alt);
            
            if(idade < 18){
                conti++;
            }
            
            mediai=mediai+idade;
            mediaa=mediaa+alt;
            
            if(peso > 80.0){
                contp++;
            }
        }    
    
        mediai=mediai/11;
        printf("Média de idade do time: %.2f\n",mediai);
    
    }
    printf("Quantidade de jogadores com idade inferior a 18 anos: %d\n",conti);
    mediaa=mediaa/55.0;
    printf("Média das alturas de todos os jogadores do campeonato: %.2f\n",mediaa);
    contp=(contp*100.0)/55.0
    printf("Porcentagem de jogadores com mais de 80 kg entre todos os jogadores do campeonato: %.2f%%\n",contp);
    return (0);
}

