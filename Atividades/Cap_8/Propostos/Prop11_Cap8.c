#include <stdio.h>
#include <stdlib.h>


float serie(int n){
    
    int i,j;
    float s=0,num=0,den=0;
    
    for(i=1;i<=n;i++){
       
        num=(i*i)+1;
        
        den=i+3;
        
        s+=num/den;
    }
    
    return s;
}

int main() {
    
    int n;
    float res;
    
    do{
        printf("Digite um número: ");
        scanf("%d",&n);
    }while(n<1);
    
    res=serie(n);
    
    printf("\nS= %f\n",res);

    return (0);
}
