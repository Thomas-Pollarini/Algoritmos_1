#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    float n1,n2,n3;
    
    printf("Digite três números diferentes:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    
    if(n1<n2 && n1<n3){
        if(n2<n3){
            printf("A ordem crescente dos números é:%f, %f, %f",n1,n2,n3);
        }
        else{
            printf("A ordem crescente dos números é:%f, %f, %f",n1,n3,n2);
        }
    }
    if(n2<n1 && n2<n3){
        if(n1<n3){
            printf("A ordem crescente dos números é:%f, %f, %f",n2,n1,n3);
        }    
        else{
            printf("A ordem crescente dos números é:%f, %f, %f",n2,n3,n1);
        }
    }
    if(n3<n1 && n3<n2){
        if(n2<n1){
            printf("A ordem crescente dos números é:%f, %f, %f",n3,n2,n1);
        }
        else{
            printf("A ordem crescente dos números é:%f, %f, %f",n3,n1,n2);
        }
    }
    
    return (0);
}

