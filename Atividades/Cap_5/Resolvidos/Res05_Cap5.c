#include <stdio.h>
#include <stdlib.h>

int main() {

    int n,dir,fat,den_atual=1;
    float numerador,x,s=0;
    
    printf("Digite o número de termos: ");
    scanf("%d",&n);
    printf("Digite o valor de X: ");
    scanf("%f",&x);
    
    int i;
    for(i=0;i<n;i++){
        
        numerador=1;
        int j;
        for(j=0;j<i+2;j++){
            
            numerador=numerador*x;
        }
        
        //algoritmo para controlar padrão do denominador.
        if(den_atual==1){
            dir=1;
        }
        if(den_atual==4){
            dir=2;
        }
        
        fat=1;
        for(j=1;j<=den_atual;j++){
            fat=fat*j;
            
        }
        
        if(dir==1){
            den_atual++;
        }else{
            den_atual--;
        }
        
        if(i%2==0){
        s=s-(numerador/fat);
        }else{
            s=s+(numerador/fat);
        }
        
        
    }
    
    printf("S=%f",s);
    
    
    return (0);
}

