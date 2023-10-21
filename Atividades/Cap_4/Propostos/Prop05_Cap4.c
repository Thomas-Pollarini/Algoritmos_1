#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int x;
    float n1,n2,res;
    
    printf("Digite dois números:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    
    printf("Menu de operações:\n1-Média entre os números digitados\n2-Diferença do maior pelo menor\n"
            "3-Produto entre os números digitados\n4-Divisão do primeiro pelo segundo\n"
            "Digite o número referente a opção desejada: ");
    scanf("%d",&x);
    
    switch(x){
        case 1:
            res=(n1+n2)/2.0;
          break;
          
        case 2:
            if(n1>=n2){
                res=n1-n2;
            }
            else{
                res=n2-n1;
            }
          break;
          
        case 3:
            res=n1*n2;
          break;
          
        case 4:
            if(n2==0){
                printf("O segundo número não pode ser igual a zero.\n");
                
                return(0);
            }
            else{
                res=n1/n2;
            }
          break;  
        
        default:
            printf("ERRO: digite uma opção válida.\n");
            
            return(0);
          break;  
    }
    
    printf("O resultado da operação é: %f\n",res);
    
    return(0);
    
}