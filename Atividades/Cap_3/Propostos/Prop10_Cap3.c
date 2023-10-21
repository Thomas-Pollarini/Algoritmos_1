#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float area,raio;
    
    printf("Declare o raio do círculo: ");
    scanf("%f",&raio);
    
    area= (raio*raio)*3.1415;
            
    printf("A área do círculo é: %.2f \n",area);
        
    return (EXIT_SUCCESS);
}

