#include <stdio.h>
#include <stdlib.h>


float serie(int num){
    
    int i;
    float s=0;
    
    for(i=1;i<=num;i++){
        s+=(1.0/i);
    }
    
    return s;
}

int main() {
    
    int num;
    float res;
    
    do{
        printf("Digite um número: ");
        scanf("%d",&num);
    }while(num<1);
    
    res=serie(num);
    
    printf("\nS= %f\n",res);

    return (0);
}

