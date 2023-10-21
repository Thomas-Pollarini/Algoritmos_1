#include <stdio.h>
#include <stdlib.h>


int main() {

    int cod,npeca,ntpeca=0,npecam=0,npecaf=0,mcod;
    float sal,msal,salm,salt=0,contm=0,contf=0,maior;
    char sexo;
    
    printf("Digite o valor do salário mínimo: ");
    scanf("%f",&salm);
    
    
    for(int i=0;i<15;i++){
        
        printf("Digite o número do operário: ");
        scanf("%d",&cod);
        printf("Digite o número de peças fabricadas no mês: ");
        scanf("%d",&npeca);
        printf("Digite o sexo do operário(M/F): ");
        scanf(" %c",&sexo);
        
        ntpeca=ntpeca+npeca;//numero total de peças
           
        
        if(sexo==77){
            npecam=npecam+npeca;
            contm++;
        }
        if(sexo==70){
            npecaf=npecaf+npeca;
            contf++;
        }
        
        
        //algoritmo para determinar salário.
        if(npeca<=30){
            sal=salm;
        }else{
            if(npeca>30 && npeca<=50){
            npeca=npeca-30;
            sal=salm+(npeca*(salm*0.03));
            }else{
                npeca=npeca-30;
                sal=salm+(npeca*(salm*0.05));
            }
        }
        
        //algoritmo para encontrar operario com maior salário
        if(i==0){
            maior=sal;
            mcod=cod;
        }else{
            if(sal>maior){
                maior=sal;
                mcod=cod;
            }
        }
        
        salt=salt+sal;//folha de pagamento
        
        printf("Número do operário: %d\nSalário do operário: %.2f\n",cod,sal);
        
    }
    
    printf("Total da folha de pagamento da fábrica: %.2f\n",salt);
    printf("Número total de peças fabricadas no mês: %d\n",ntpeca);
    
    contm=npecam/contm; //media de peça fabricadas por homens
    contf=npecaf/contf; //media de peça fabricadas por mulheres
    
    printf("Média de peças fabricadas pelos homens: %.2f\nMédia de peças fabricadas pelas mulheres: %.2f\n",contm,contf);
    printf("Número do operário ou operária de maior salário: %d\n",mcod);
    return (0);
}

