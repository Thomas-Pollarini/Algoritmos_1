#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float base,altura,area;
    
    printf("Declare a base e a altura do triângulo:\n");
    scanf("%f",&base);
    scanf("%f",&altura);
    
    area=(base*altura)/2.0;
            
    printf("A área do triângulo é: %.2f \n",area);
    
    return (EXIT_SUCCESS);
}

