#include <stdio.h>
#include <stdlib.h>

int converter(int hr, int min, int seg){
    
    int total;
    
    total=seg;
    total+=hr*3600;
    total+=min*60;
    
    return total;
    
}

int main() {

    int hr,min,seg,total;
    
    printf("Digite as horas: ");
    scanf("%d",&hr);
    printf("Digite os minutos: ");
    scanf("%d",&min);
    printf("Digite os segundos: ");
    scanf("%d",&seg);
    
    total=converter(hr,min,seg);
    
    printf("\nTotal em segundos: %ds\n",total);
    
    return (0);
}

