#include <stdio.h>
#include <stdlib.h>


int main() {

    int pais;
    float vlru,vlrt,vlrf,imp,impt=0,seg;
    char mt,carga;
    
    printf("Digite o preço unitário do produto: ");
    scanf("%f",&vlru);
    
    while(vlru>0.0){
        
        printf("Digite o código do país de origem: ");
        scanf("%d",&pais);
        printf("Declare o meio de transporte: ");
        scanf(" %c",&mt);
        printf("A carga é perigosa?(S/N):");
        scanf(" %c",&carga);
        
        if(vlru<=100){
            imp=vlru*0.05;
        }else{
            imp=vlru*0.1;
        }
        
        if(carga==83){
            switch(pais){
                
                case 1:
                    vlrt=50;
                  break;
                  
                case 2:
                    vlrt=21;
                  break;  
                  
                case 3:
                    vlrt=24;
                  break;    
            }
        }
        if(carga==78){
            switch(pais){
                
                case 1:
                    vlrt=12;
                  break;
                  
                case 2:
                    vlrt=21;
                  break;  
                  
                case 3:
                    vlrt=60;
                  break;    
            }
        }
        
        seg=0;
        if(pais==2 || mt==65){
            seg=vlru/2;
        }
        
        vlrf=vlru+vlrt+imp+seg;
        impt=impt+imp;
        
        printf("Valor do imposto: %.2f\nValor do transporte: %.2f\nValor do seguro: %.2f\nPreço final: %.2f\n",imp,vlrt,seg,vlrf);
        
        printf("\nDigite o preço unitário do produto: ");
        scanf("%f",&vlru);
        
    }
    
    printf("Total dos impostos: %.2f",impt);
    
    return (0);
}

