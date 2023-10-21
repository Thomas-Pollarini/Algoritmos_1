#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float ang,h,esc,rad;
    
    printf("Digite o ângulo e a altura da escada:\n");
    scanf("%f",&ang);
    scanf("%f",&h);
    
    rad=(ang*3.1415)/180.0;
    esc=h/sin(rad);
            
    printf("O comprimento da escada será:%.2f\n",esc);
    
    return (EXIT_SUCCESS);
}

