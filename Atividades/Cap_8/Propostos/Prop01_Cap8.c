#include <stdio.h>
#include <stdlib.h>

int soma_entre(int n){
    
    int i,soma=0;
    
    for(i=1;i<=n;i++){
        soma+=i;
    }
    
    return soma;
}

int main() {

    int n,res;
    
    printf("Digite o valor de N: ");
    scanf("%d",&n);
    
    res=soma_entre(n);
    
    printf("\nResultado: %d\n",res);
    
    return (0);
}

