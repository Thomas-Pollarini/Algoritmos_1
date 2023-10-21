#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float pe,pol,jar,mil;
    
    printf("Digite o valor em pés:");
    scanf("%f",&pe);
    
    pol=pe*12.0;
    jar=pe/3.0;
    mil= jar/1760.0;
            
    printf("Polegadas: %.2f\nJardas: %.2f\nMilhas: %.6f\n",pol,jar,mil);
    
    return (EXIT_SUCCESS);
}

