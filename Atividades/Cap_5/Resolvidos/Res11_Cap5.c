#include <stdio.h>
#include <stdlib.h>

int main() {

    int num,qntd=0;
    
    printf("Digite um número: ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++){
        
        if(num%i==0){
            qntd++;
        }
        
    }
    
    if(qntd>2){
        printf("Número não é primo.");
    }else{
        printf("Número é primo.");
    }
    
    
    return (0);
}

