#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float h,hip,cat;
    
    printf("Digite a altura em que o quadro ficará e o comprimento da escada:\n");
    scanf("%f",&h);
    scanf("%f",&hip);
    
    if(h<hip){
    cat=pow(hip,2)-pow(h,2);
    cat=sqrt(cat);
    
    printf("A distancia da escada até a parede é de:%.2f\n",cat);}
    else{
        printf("A altura do quadro não pode ser maior que o comprimento da escada\n");}
    
    return (EXIT_SUCCESS);
}

