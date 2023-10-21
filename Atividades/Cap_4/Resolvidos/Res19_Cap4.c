#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float alt,pes;
    
    printf("Digite seu peso e sua altura:\n");
    scanf("%f",&pes);
    scanf("%f",&alt);
    
    if(alt<1.20){
        if(pes<=60.0){
        printf("Classificação: A");
        }
        else{
            if(pes>60.0 && pes<=90.0){
                printf("Classificação: D");
            }
            else{
                printf("Classificação: G");
                
            }
        }
    }
    if(alt>=1.20 && alt<=1.70){
        if(pes<=60.0){
        printf("Classificação: B");
        }
        else{
            if(pes>60.0 && pes<=90.0){
                printf("Classificação: E");
            }
            else{
                printf("Classificação: H");
                
            }
        }
    }
    if(alt>1.70){
        if(pes<=60.0){
        printf("Classificação: C");
        }
        else{
            if(pes>60.0 && pes<=90.0){
                printf("Classificação: F");
            }
            else{
                printf("Classificação: I");
                
            }
        }
    }
        
    return (0);
}

