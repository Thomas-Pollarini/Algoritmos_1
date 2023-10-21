#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {

    int x;
    float sal,imp,nsal;
    
    printf("Menu de opções:\n1-Imposto\n2-Novo salário\n3-Classificação"
    "\nDigite a opção desejada: ");
    scanf("%d",&x);
    
    switch(x){
        
        case 1:
            printf("Digite o seu salário atual: ");
            scanf("%f",&sal);
            if(sal<500.0){
                imp=sal*0.05;
            }
            if(sal>=500.0 && sal<=850.0){
                imp=sal*0.10;
            }
            if(sal>850.0){
                imp=sal*0.15;
            }
        
            printf("O valor do imposto é:%.2f",imp);
          break;
          
        case 2:
            printf("Digite o seu salário atual: ");
            scanf("%f",&sal);
            if(sal>1500.0){
                nsal=sal+25;
            }
            if(sal>=750.0 && sal<=1500.0){
                nsal=sal+50;
            }
            if(sal>=450.0 && sal<750.0){
                nsal=sal+75;
            }
            if(sal<450.0){
                nsal=sal+100;
            }    
            
            printf("O valor do novo salário é:%.2f",nsal);
          break;  
        
        case 3:
            printf("Digite o seu salário atual: ");
            scanf("%f",&sal);
            if(sal<=700.0){
                printf("Classificação do funcionário: mal remunerado");
            }
            if(sal>700.0){
                printf("Classificação do funcionário: bem remunerado");
            }
          break; 
        
        default: 
            printf("A opção digitada não existe.");
          break; 
    }
    return (0);
}

