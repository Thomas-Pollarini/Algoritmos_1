#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float n1,n2,div;
    
    printf("Digite o primeiro número:");
    scanf("%f",&n1);
    printf("Digite o segundo número(diferente de zero):");
    scanf("%f",&n2);
    
    div= n1/n2;
    
    printf("A divisão do primeiro número pelo segundo é igual a:%f\n",div);
    
    return (EXIT_SUCCESS);
}

