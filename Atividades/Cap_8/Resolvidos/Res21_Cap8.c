#include <stdio.h>
#include <stdlib.h>


int soma_primos(int x, int y){
    
    int i,j,soma=0,cont;
    
    for(i=x;i<=y;i++){
        cont=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                cont++;
            }
        }
        if(cont==2){
            soma+=i;
        }
    }
    
    return soma;
}

int main() {

    int x,y,soma;
    
    do{
        
        do{
            printf("Digite o valor de x: ");
            scanf("%d",&x);
        }while(x<0);
        
        do{
            printf("Digite o valor de y: ");
            scanf("%d",&y);
        }while(y<x);
        
        if(x==y){
            return(0);
        }
        
        soma=soma_primos(x,y);
        
        printf("\nX=%d\nY=%d\nSomatório=%d\n",x,y,soma);
        
    }while(x!=y);
    
    
    return (0);
}

