#include <stdio.h>
#include <stdlib.h>


int main() {

    int cont1=0,cont2=0,cont3=0,cont4=0;
    float cont5=0;
    char sexo,op;
    
    for(int i=0;i<10;i++){
        
        printf("Digite seu sexo(M/F): ");
        scanf(" %c",&sexo);
        printf("Digite sua resposta(S/N): ");
        scanf(" %c",&op);
        
        if(op==83){
            cont1++;
            if(sexo==70){
                cont3++;
            }
        }
        if(op==78){
            cont2++;
            if(sexo==77){
                cont4++;
            }
        }
        
        if(sexo==77){
            cont5++;
        }
        
    }
    
    cont5=(cont4*100)/cont5;
    
    printf("Número de pessoas que responderam sim: %d\nNúmero de pessoas que responderam não: %d\n"
            "Número de mulheres que responderam sim: %d\n"
            "Percentagem de homens que responderam não entre todos os homens analisados: %.2f%%\n",cont1,cont2,cont3,cont5);
    
    return (0);
}

