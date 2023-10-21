#include <stdio.h>
#include <stdlib.h>


int main() {

    int num,cont1,contp=0;
    
    for(int i=1;i<=10;i++){
    
        printf("Digite um número: ");
        scanf("%d",&num);
        
        cont1=0;
        for(int j=1;j<=num;j++){
            
            if(num%j==0){
                cont1++;
            }
            
        }
        
        if(cont1<=2){
            contp++;
        }
        
    }
    
    printf("Quantidade de números primos: %d",contp);
    
    return (0);
}

