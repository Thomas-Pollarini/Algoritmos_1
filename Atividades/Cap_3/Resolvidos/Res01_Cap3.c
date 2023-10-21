#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float num1,num2,sub;
    
    printf("Digite dois números: \n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    
    sub=num1-num2;
    
    printf("A subtração do primeiro número pelo segundo é:%.2f\n",sub);
    
    return (EXIT_SUCCESS);
}

