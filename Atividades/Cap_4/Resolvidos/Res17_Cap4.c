#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float a,b,c,x1,x2,delta;
    
    printf("Digite o valor de a, b e c (ax^2 + bx + c):\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if(a==0){
        printf("Os valores digitados não formam uma equação de segundo grau.");
    }
    else{
        delta=(b*b)-(4*a*c);
    
        if(delta<0){
            printf("Não existe raiz real para essa equação.");
        }
        else{
            if(delta==0){
                x1= (-b) / (2 * a);
                printf("Essa equação possui apenas uma raiz real.\n"
                        "x= %f",x1);
            }
            else{ 
                x1=(-b + sqrt(delta))/(2*a);
                x2=(-b - sqrt(delta))/(2*a);
                printf("As raízes dessa equação são:\nx1=%f\nx2=%f\n",x1,x2);
       
            }
        }
    }    
    return (0);
}

