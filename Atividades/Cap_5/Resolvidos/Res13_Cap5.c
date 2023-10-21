#include <stdio.h>
#include <stdlib.h>

int main() {

    int numc;
    float tempo,contm=0,contf=0,conti=0;
    char sexo;
    
    printf("Digite o número de crianças nascidas no período: ");
    scanf("%d",&numc);
    
    for(int i=0; i<numc;i++){
        
        printf("Digite o sexo da criança(M/F): ");
        scanf(" %c",&sexo);
        printf("Digite o tempo de vida da criança (em meses): ");
        scanf("%f",&tempo);
        
        if(sexo==77){
            contm++;
        }
        if(sexo==70){
            contf++;
        }
        
        if(tempo<=24.0){
            conti++;
        }
        
    }
    
    contm= (contm*100.0)/numc;
    contf= (contf*100.0)/numc;
    
    printf("Percentagem de crianças do sexo masaculino mortas no período: %.2f%%\n",contm);
    printf("Percentagem de crianças do sexo feminino mortas no período: %.2f%%\n",contf);
    
    conti= (conti*100)/numc;
    
    printf("Percentagem de crianças que viveram 24 meses ou menos no período: %.2f%%\n",conti);
    
    return (0);
}

