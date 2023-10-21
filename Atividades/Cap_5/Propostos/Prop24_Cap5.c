#include <stdio.h>
#include <stdlib.h>

int main() {

    
    int num,cont1=1,maior,menor;
    
    printf("Digite um número: ");
    scanf("%d",&num);
    
    while(num!=0){
        
        if(num<0){
            printf("Digite apenas números inteiros POSITIVOS.\n");
        
        }else{
            if(cont1==1){
                maior=num;
                menor=num;
                cont1++;
            }else{
                if(num>maior){
                    maior=num;
                }  
                if(num<menor){
                    menor=num;
                }
            }
        }
        
        printf("Digite um número: ");
        scanf("%d",&num);
        
    }
    
    printf("Maior número do conjunto: %d\nMenor número do conjunto: %d\n",maior,menor);
    
    return (0);
}

