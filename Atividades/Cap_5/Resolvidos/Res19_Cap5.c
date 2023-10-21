#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int m,n,cont,soma;
    
    printf("Digite o primeiro número: ");
    scanf("%d",&m);
    printf("Digite o segundo número: ");
    scanf("%d",&n);
        
    
    while(m<n){
        
        cont=n-m;
        soma=m+n;
        for(int i=1;i<cont;i++){
            soma=soma +(m+i);
            
        }
        
        printf("Soma de todos os números inteiros entre m e n(inclusive): %d\n",soma);
        
        printf("Digite o primeiro número: ");
        scanf("%d",&m);
        printf("Digite o segundo número: ");
        scanf("%d",&n);
        
        
    }
    
    return (0);
}
