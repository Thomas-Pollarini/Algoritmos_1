#include <stdio.h>
#include <stdlib.h>


int main() {

    
    int x,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0;
    float percn=0,percb=0,contv=0;
    
    
    printf("Digite o códigde voto: ");
    scanf("%d",&x);
    
    while(x!=0){
        
        switch(x){
            
            case 1:
                cont1++;
                contv++;
              break;  
            
            case 2:
                cont2++;
                contv++;
              break; 
              
            case 3:
                cont3++;
                contv++;
              break; 
              
            case 4:
                cont4++;
                contv++;
              break; 
              
            case 5:
                cont5++;
                contv++;
              break; 
              
            case 6:
                cont6++;
                contv++;
              break;   
            
            default:
                printf("Código digitado inválido.\n");
              break;  
        }
     
        printf("Digite o códigde voto: ");
        scanf("%d",&x);
               
    }
    
    percn=(cont5*100)/contv;
    percb=(cont6*100)/contv;
    
    printf("Total de votos candidato 1: %d\nTotal de votos candidato 2: %d\nTotal de votos candidato 3: %d\nTotal de votos candidato 4: %d\n"
            "Total de votos nulos: %d\nTotal de votos em branco: %d\nPorcentagem de votos nulos sobre o total de votos: %.2f%%\n"
            "Porcentagem de votos em branco sobre o total de votos: %.2f%%\n",cont1,cont2,cont3,cont4,cont5,cont6,percn,percb);
    
    
    return (0);
}

