#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
    
    float a,b,c;
    int i;
    
    printf("Digite três números diferente:\n");
      scanf("%f",&a);
      scanf("%f",&b);
      scanf("%f",&c);
    printf("1-Ordem crescente\n2-Ordem decrescente\n3-O maior entre os outros\n"
            "Digite o número associado a opção desejada: ");
      scanf("%d",&i);
      
    switch(i){ 
        
        case 1:
            if(a<b && a<c){
                if(b<c){
                    printf("Ordem crescente:%f, %f, %f",a,b,c);
                }
                else{
                    printf("Ordem crescente:%f, %f, %f",a,c,b);
                }
            }
            if(b<a && b<c){
                if(a<c){
                    printf("Ordem crescente:%f, %f, %f",b,a,c);
                }
                else{
                    printf("Ordem crescente:%f, %f, %f",b,c,a);                 
                }
            }
            if(c<b && c<a){
                if(b<a){
                    printf("Ordem crescente:%f, %f, %f",c,b,a);
                }
                else{
                    printf("Ordem crescente:%f, %f, %f",c,a,b);
                }
            }
            break;
            
        case 2:
            if(a>b && a>c){
                if(b>c){
                    printf("Ordem decrescente:%f, %f, %f",a,b,c);
                }
                else{
                    printf("Ordem decrescente:%f, %f, %f",a,c,b);
                }
            }
            if(b>a && b>c){
                if(a>c){
                    printf("Ordem decrescente:%f, %f, %f",b,a,c);
                }
                else{
                    printf("Ordem decrescente:%f, %f, %f",b,c,a);                 
                }
            }
            if(c>b && c>a){
                if(b>a){
                    printf("Ordem decrescente:%f, %f, %f",c,b,a);
                }
                else{
                    printf("Ordem decrescente:%f, %f, %f",c,a,b);
                }
            }
            break;
            
        case 3:
            if(a>b && a>c){
                printf("Ordem desejada:%f, %f, %f",b,a,c);
            }
            if(b>a && b>c){
                printf("Ordem desejada:%f, %f, %f",a,b,c);                 
            }
            if(c>b && c>a){
                printf("Ordem desejada:%f, %f, %f",a,c,b);
            }
            break;
    }  
    return (0);
}

