#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float sal,ch1,ch2,imp1,imp2,saldof;
    
    printf("Digite o valor depositado: ");
    scanf("%f",&sal);
    printf("Digite o valor dos cheques retirados:\n");
    scanf("%f",&ch1);
    scanf("%f",&ch2);
    
    imp1=ch1*0.0038;
    imp2=ch2*0.0038;
    saldof=sal-ch1-ch2-imp1-imp2;        
            
    printf("Seu saldo final é: %.2f\n",saldof);
    
    return (EXIT_SUCCESS);
}

