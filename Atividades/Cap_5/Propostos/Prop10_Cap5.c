#include <stdio.h>
#include <stdlib.h>


int main() {

    int num,soma=0,somap=0,cont=0;
    
    for(int i=0;i<10;i++) {
        
        printf("Digite um número: ");
        scanf("%d",&num);
        
        if(num%2==0){
            soma=soma+num;
        }
        
        for(int j=1;j<=num;j++){
            if(num%j==0){
                cont++;
            }
        }
        if(cont>2){
            somap=somap+num;
        }
    }
    
    printf("Soma dos números pares: %d\nSoma dosnúmeros primos: %d\n",soma,somap);
    
    
    return (0);
}

