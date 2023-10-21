#include <stdio.h>
#include <stdlib.h>


float calcular_serie(int N){
    
    int i,j;
    float S=0,den;
    
    
    
    
    for(i=1;i<=N;i++){
        
        den=1;
        for(j=1;j<=i;j++){
            den*=j;
             
        }
        
        S+=1.0/den;
       
    }
    
    return S;
}

int main() {
    
    int N;
    float S;
    
    printf("Digite o números de termos da série: ");
    scanf("%d",&N);
    S=calcular_serie(N);
    printf("\nS= %f",S);
    
    return (0);
}

