#include <stdio.h>
#include <stdlib.h>

int divisor(int n1, int n2){
    
    int x,cont=0;
    
    if(n1%n2==0){
        x=0;
    }else{
        while(cont==0){
            n2++;
            if(n1%n2==0){
                x=n2;
                cont++;
            }
        }
    }
    return x;
}

int main() {

    int n1,n2,res;
    
    do{
    printf("Digite o primeiro número: ");
    scanf("%d",&n1);
    }while(n1<=0);
    do{
    printf("Digite o segundo número: ");
    scanf("%d",&n2);
    }while(n2>n1);
    
    res=divisor(n1,n2);
    
    printf("\nRetorno: %d\n",res);
    
    return (0);
}

