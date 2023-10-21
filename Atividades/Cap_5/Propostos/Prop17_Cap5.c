#include <stdio.h>
#include <stdlib.h>


int main() {

    int canal,pessoa,cont=0;
    float perc1=0,perc2=0,perc3=0,perc4=0;
    
    printf("Digite o número do canal: ");
    scanf("%d",&canal);
    
    while(canal!=0){
        
        printf("Digite o número de pessoas assistindo: ");
        scanf("%d",&pessoa);
        
        switch(canal){
            
            case 4:
                perc1=perc1+pessoa;
                cont=cont+pessoa;
              break;
              
            case 5:
                perc2=perc2+pessoa;
                cont=cont+pessoa;
              break; 
              
            case 7:
                perc3=perc3+pessoa;
                cont=cont+pessoa;
              break; 
              
            case 12:
                perc4=perc4+pessoa;
                cont=cont+pessoa;
              break; 
              
            default:
                //televisão considerada desligada
              break;  
            
        }
    
    printf("Digite o número do canal: ");
    scanf("%d",&canal);   
        
    }
    
    perc1=(perc1*100)/cont;
    perc2=(perc2*100)/cont;
    perc3=(perc3*100)/cont;
    perc4=(perc4*100)/cont;
    
    printf("Porcentagem de audiência do canal 4: %.2f%%\nPorcentagem de audiência do canal 5: %.2f%%\n"
            "Porcentagem de audiência do canal 7: %.2f%%\nPorcentagem de audiência do canal 12: %.2f%%\n",perc1,perc2,perc3,perc4);
    
    return (0);
}

