#include <stdio.h>
#include <stdlib.h>


float percentual(float ant, float novo){
    
    return ((novo-ant)*100)/ant;
    
}

int main() {

    float vlra,vlrn,res;
    
    printf("Digite o valor antigo: ");
    scanf("%f",&vlra);
    printf("Digite o valor novo: ");
    scanf("%f",&vlrn);
    res=percentual(vlra,vlrn);
    printf("\nPercentual de acréscimo: %.2f%%\n",res);
    
    return (0);
}

