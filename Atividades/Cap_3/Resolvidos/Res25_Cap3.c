#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    int hr,min,hrm,mint,seg;
    
    printf("Digite as horas e os minutos:\n");
    scanf("%d",&hr);
    scanf("%d",&min);
    
    hrm=hr*60;
    mint=min+hrm;
    seg=mint*60;
    
    printf("Hora convertida em minutos:%d\n"
            "Total dos minutos:%d\n"
            "Total dos minutos convertidos em segundos:%d\n",hrm,mint,seg);
            
    return (EXIT_SUCCESS);
}

