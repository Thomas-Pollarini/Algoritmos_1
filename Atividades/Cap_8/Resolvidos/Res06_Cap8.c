#include <stdio.h>
#include <stdlib.h>


tabuada(int num){
    
    int i,j;
    for(i=1;i<=num;i++){
        printf("\n");
        for(j=i;j<=num;j++){
            printf(" %d ",i*j);
        }
    }
}

int main() {
    
    int num;
    
    do{
        printf("Escreva um número de 1 a 9: ");
        scanf("%d",&num);
    }while(num<1 || num>9);
    
    tabuada(num);
    
    return (0);
}

