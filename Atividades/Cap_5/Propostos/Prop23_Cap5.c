#include <stdio.h>
#include <stdlib.h>


int main() {

    int x,nmes;
    float sal;
    
    
    printf("Menu de opções:\n1. Novo salário\n2. Férias\n3. Décimo terceiro\n4. Sair\nDigite a opção desejada: ");
    scanf("%d",&x);
    
    while(x!=4){
        
        switch(x){
            
            case 1:
                printf("Digite o valor do salário atual: ");
                scanf("%f",&sal);
                
                if(sal<=210){
                    sal=sal*1.15;
                }else{
                    if(sal>210 && sal<=600){
                        sal=sal*1.1;
                    }else{
                        sal=sal*1.05;
                    }
                }
                
                printf("\nValor novo salário: %.2f\n\n",sal);
              break;
                
            case 2:
                printf("Digite o valor do salário atual: ");
                scanf("%f",&sal);
                
                sal=sal+(sal/3.0);
                
                printf("\nValor das férias: %.2f\n\n",sal);
              break;
              
            case 3:
                printf("Digite o valor do salário atual: ");
                scanf("%f",&sal);
                printf("Digite o número de meses trabalhados no ano: ");
                scanf("%d",&nmes);
                
                sal=sal*(nmes/12.0);
                
                printf("\nValor do décimo terceiro: %.2f\n\n",sal);
              break;
              
            default:
                printf("\nOpção digitada inválida.\n\n");
              break;  
        }
        
        printf("Menu de opções:\n1. Novo salário\n2. Férias\n3. Décimo terceiro\n4. Sair\nDigite a opção desejada: ");
        scanf("%d",&x);
        
    }
    
    
    return (0);
}

