#include <stdio.h>
#include <stdlib.h>

int MDC(int n1,int n2){
    
    int i,mdc;
    
    if(n1<0){
        n1-=n1*2;
    }
    if(n2<0){
        n2-=n2*2;
    }
    
    i=1;
    while(i!=n1+1 && i!=n2+1){
        if(n1%i==0 && n2%i==0){
            mdc=i;
        }
        i++;
    }
    
    return mdc;
}


int main() {

    int n1,n2,mdc;
    
    printf("Digite o primeiro número: ");
    scanf("%d",&n1);
    printf("Digite o segundo número: ");
    scanf("%d",&n2);
    
    mdc=MDC(n1,n2);
    
    printf("MDC= %d",mdc);
    
    return (0);
}

