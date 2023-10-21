#include <stdio.h>
#include <stdlib.h>


int operacao(int a,int b,int c){

    int i,soma=0;
    for(i=b;i<=c;i++){
        if(i%a==0){
            soma+=i;
        }
    }
    return soma;
}

int main() {

    int a=0,b,c,res;
    
    while(a<=1){
        printf("Digite o valor de A (A>1): ");
        scanf("%d",&a);
    }
    printf("Digite o valor de B: ");
    scanf("%d",&b);
    printf("Digite o valor de C: ");
    scanf("%d",&c);
    res=operacao(a,b,c);
    printf("Resultado: %d",res);
    return (0);
}

