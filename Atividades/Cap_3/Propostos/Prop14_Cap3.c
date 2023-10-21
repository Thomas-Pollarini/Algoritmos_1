#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    int nas,ano,idade,idade50;
    
    printf("Digite o ano em que nasceu e o ano atual:\n");
    scanf("%d",&nas);
    scanf("%d",&ano);
    
    idade=ano-nas;
    idade50=2050-nas;
            
    printf("Este ano você tem ou fará: %d\n"
            "Em 2050 você terá: %d\n",idade,idade50);
    
    return (EXIT_SUCCESS);
}

