#include <stdio.h>
#include <stdlib.h>

int soma_divisores(int num){
    
    int i,res=0;
    
    for(i=1;i<=num;i++){
        if(num%i==0){
            res+=i;
        }
    }
    
    return res;
    
}

int main() {
    
    int num,res;
    
    do{
        printf("Digite um número: ");
        scanf("%d",&num);
    }while(num<0);
    
    res=soma_divisores(num);

    printf("\nSoma dos divisores: %d\n",res);
    return (0);
}

