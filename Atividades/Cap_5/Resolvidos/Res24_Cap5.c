#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int x;
    float sal,nsal,imp;
    
    printf("Menu de opções:\n1-Impostos\n2-Novo salário\n3-Classificação\n4-Finalizar o programa\n");
    scanf("%d",&x);
    
    while(x!=4){
        
        switch(x){
            
            case 1:
                printf("Digite o valor do salário: ");
                scanf("%f",&sal);
                
                if(sal<500.0){
                    imp=sal*0.05;
                }else{
                    if(sal>=500.0 && sal<=850.0){
                        imp=sal*0.1;
                    }else{
                        imp=sal*0.15;
                    }
                }
                
                printf("Valor do imposto: %.2f\n",imp);
              
              break;
              
            case 2:
                printf("Digite o valor do salário: ");
                scanf("%f",&sal);
                
                if(sal>1500.0){
                    nsal=sal+25.0;
                }else{
                    if(sal>=750.0 && sal<=1500.0){
                        nsal=sal+50.0;
                    }else{
                        if(sal>=450.0 && sal<750.0){
                            nsal=sal+75.0;
                        }else{
                            nsal=sal+100;
                        }
                    }
                }
                
                printf("Valor novo salário: %.2f\n",nsal);
                
              break;
              
            case 3:
                printf("Digite o valor do salário: ");
                scanf("%f",&sal);
                
                if(sal<=700.0){
                    printf("Classificação: MAL remunerado\n");
                }else{
                    printf("Classificação: BEM remunerado\n");
                }
              break;
              
            default:
                printf("\nOpção digitada inválida.\n");
        }
        
        printf("\nMenu de opções:\n1-Impostos\n2-Novo salário\n3-Classificação\n4-Finalizar o programa\n");
        scanf("%d",&x);
            
    }
    
    
    

    return (0);
}

