#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    float n1,n2;
    
    printf("Digite dois números:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    
    if(n1==n2){
        printf("Os números são iguais");
    }
    
    if(n1>n2){
        printf("%f é maior que %f",n1,n2);
    }
    if(n1<n2){
        printf("%f é maior que %f",n2,n1);
    }
    
    return (0);
}

