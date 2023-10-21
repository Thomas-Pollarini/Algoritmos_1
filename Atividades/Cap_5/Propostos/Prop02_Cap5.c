#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    int ning=120;
    float lucro,vlri=5.0;
    
    printf("Preço do ingresso:   Qntd de ingressos vendidos:     Lucro:\n");
    while(vlri>=1){
        
        lucro=(vlri*ning)-200;
        
        
        
        printf("      %.2f                      %d                  %.2f\n",vlri,ning,lucro);
                
        vlri=vlri-0.5;
        ning=ning+26;
        
    }  

    return (0);
}

