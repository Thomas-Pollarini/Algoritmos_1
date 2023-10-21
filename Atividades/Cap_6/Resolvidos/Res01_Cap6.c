#include <stdio.h>
#include <stdlib.h>

#define tam 9

int main() {

    int num[tam],cont1;
    
    int i;
    for(i=0;i<tam;i++){
        
        printf("Digite um número inteiro: ");
        scanf("%d",&num[i]);
        
    }
    
    for(i=0;i<tam;i++){
        
        cont1=0;
        
        for(int j=1;j<=num[i];j++){
            
            if(num[i]%j==0){
                cont1++;
            }
        }
        if(cont1<=2){
            printf("Número: %d\nPosição: %d\n\n",num[i],i);
        }
        
    }
    
    
    
    return (0);
}

