#include <stdio.h>
#include <stdlib.h>


int soma(int a, int b){
    
    int i,soma=0;
    for(i=a+1;i<b;i++){
        soma+=i;
    }
    return soma;
}

int main() {

    int n1,n2,res;
    
    printf("Digite o primeiro número: ");
    scanf("%d",&n1);
    printf("Digite o segundo número: ");
    scanf("%d",&n2);
    res=soma(n1,n2);
    printf("\nResultado: %d",res);
    
    return (0);
}

