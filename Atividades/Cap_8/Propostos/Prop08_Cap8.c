#include <stdio.h>
#include <stdlib.h>


void fatorial(){
   
    int i,num,fat;
    
    do{
        printf("Digite um número: ");
        scanf("%d",&num);
    }while(num<0);
    
    fat=1;
    for(i=1;i<=num;i++){
        fat*=i;
    }
    
    printf("\nFatorial do número digitado: %d\n",fat);
}

int main() {

    fatorial();
    
    return (0);
}

