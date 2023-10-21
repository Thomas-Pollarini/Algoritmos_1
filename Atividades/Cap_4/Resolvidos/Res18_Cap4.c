#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float a,b,c;
    
    printf("Digite três valores:\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    
    if(!(a<b+c)){
        printf("É impossivel formar um triângulo com esses valores.");
        return(0);
    }              
    if(!(b<a+c)){
        printf("É impossivel formar um triângulo com esses valores.");
        return(0);
    }
    if(!(c<a+b)){
        printf("É impossivel formar um triângulo com esses valores.");
        return(0);
    }    
    
    if(a==b && b==c){
        printf("Com os valores é possivel formar um triângulo equilátero.");
    }
    else{
        if(a==b || a==c || b==c){
            printf("Com os valores é possivel formar um triângulo isóceles.");
        }
        else{
            printf("Com os valores é possivel formar um triângulo escaleno.");
        }
    }
    
    return (0);
}

