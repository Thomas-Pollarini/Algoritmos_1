#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    int N,ND;
    
    printf("Digite o numero de lados do poligono: ");
    scanf("%d",&N);
    
    ND=N*(N - 3)/2;
    
    printf("Número de diagonais:%d\n",ND);
    
    return (EXIT_SUCCESS);
}

