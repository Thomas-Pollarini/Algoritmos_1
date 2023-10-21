#include <stdio.h>
#include <stdlib.h>

int main() {

    int n,num,fat;
    
    printf("Digite quantos valores deverão ser lidos: ");
    scanf("%d",&n);
    
    int i;
    for( i = 0; i < n ; i++){
        printf("Digite um valor: ");
        scanf("%d",&num);
        
        fat=1;
        
        int j;
        for(j=1; j<=num; j++){
            
            fat=fat*j;
            
        }        
        
        printf("Valor lido: %d\nFatorial do valor lido: %d\n",num,fat);
    }
    
    return (0);
}

