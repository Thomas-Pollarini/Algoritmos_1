#include <stdio.h>
#include <stdlib.h>




int verificar(int x){
    
    if(x>=0){
        x=1;
    }else{
        x=0;
    }
    return x;
    
}


int main() {

    int num;
    
    printf("Digite um número: ");
    scanf("%d",&num);
    num=verificar(num);
    printf("verificação: %d\n",num);
    return (0);
}

