#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float n1,n2,n3,p1,p2,p3,media;
    
    printf("Digite suas notas: \n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    printf("Digite os pesos respectivos de cada nota: \n");
    scanf("%f",&p1);
    scanf("%f",&p2);
    scanf("%f",&p3);
    
    media=(n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
    
    printf("A média ponderada é : %.2f \n",media);
    
    return (EXIT_SUCCESS);
}

