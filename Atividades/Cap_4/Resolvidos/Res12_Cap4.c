#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int x;
    float sal,nsal,vlr;
    
    printf("Digite o código referente ao seu cargo: ");
      scanf("%d",&x);
    printf("Digite o valor do salário atual: ");
      scanf("%f",&sal);
      
    switch(x){
        
        case 1:
            vlr=sal*0.5;
            nsal=sal+vlr;
            printf("O cargo é de Escriturário\n");
          break;
          
        case 2:
            vlr=sal*0.35;
            nsal=sal+vlr;
            printf("O cargo é de Secretário\n");
          break;
          
        case 3:
            vlr=sal*0.2;
            nsal=sal+vlr;
            printf("O cargo é de Caixa\n");
          break;
                    
        case 4:
            vlr=sal*0.1;
            nsal=sal+vlr;
            printf("O cargo é de Gerente\n");
          break;
        
        case 5:
            printf("O cargo é de diretor, e não receberá nenhum aumento.");
            
            return(0);
          break;  
        
        default:
            printf("O código de cargo digitado não existe.");
            
            return(0);
          break;  
    }
    
    printf("O valor do aumento é: %.2f\nO novo salário será:%.2f\n",vlr,nsal);
    
    return (0);
}

