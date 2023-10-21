#include <stdio.h>
#include <stdlib.h>

#define tam 5

int main() {

    int i,cod[tam];
    float sal[tam],tempo[tam],nsal;
    
    for(i=0;i<tam;i++){
        printf("Digite o código do funcionário: ");
        scanf("%d",&cod[i]);
        printf("Digite o tempo de serviço do funcionário: ");
        scanf("%f",&tempo[i]);
        printf("Digite o salário do funcionário: ");
        scanf("%f",&sal[i]);
        
    }
    
    printf("\nCódigos dos funcionários que não receberão aumento: ");
    for(i=0;i<tam;i++){
        if(tempo[i]<=5 && sal[i]>=800){
            printf(" %d ",cod[i]);
        }
    }
    printf("\nFuncionários que receberão aumento: \n");
    for(i=0;i<tam;i++){
        if(tempo[i]>5 && sal[i]<800){
            nsal=sal[i]*1.35;
            printf("Código: %d\nNovo salário: %.2f\n",cod[i],nsal);
        }else{
            if(tempo[i]>5){
                nsal=sal[i]*1.25;
                printf("Código: %d\nNovo salário: %.2f\n",cod[i],nsal);
            }
            if(sal[i]<800){
                nsal=sal[i]*1.15;
                printf("Código: %d\nNovo salário: %.2f\n",cod[i],nsal);
            }
        }
    }
    
    return (0);
}

