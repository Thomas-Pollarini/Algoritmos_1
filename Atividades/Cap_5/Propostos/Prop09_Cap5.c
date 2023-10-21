#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade,qnt1=0,cont1;
    float peso,alt,mediai=0,perc1=0;
    
    
    for(int i=0;i<10;i++){
        
        printf("Digite sua idade: ");
        scanf("%d",&idade);
        printf("Digite seu peso: ");
        scanf("%f",&peso);
        printf("Digite sua altura: ");
        scanf("%f",&alt);
    
        mediai=mediai+idade;
        
        if(peso>90 && alt<1.50){
            qnt1++;
        }
        if(alt>1.9){
            cont1++;
            if(idade>=10 && idade<=30){
                perc1++;
            }
                
            
        }     
        
        
    }
    
    mediai=mediai/10.0;
    perc1=(perc1*100.0)/cont1;
    
    printf("Média das idades das dez pessoas: %.2f\nQuantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro: %d\n"
            "Porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m: %.2f%%",mediai,qnt1,perc1);
            
    return (0);
}

