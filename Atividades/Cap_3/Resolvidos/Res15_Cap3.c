#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float sal,conta1,conta2,saldo;
    
    printf("Digite o valor do salário:");
    scanf("%f",&sal);
    printf("Digite o valor das contas:\n");
    scanf("%f",&conta1);
    scanf("%f",&conta2);
    
    conta1=conta1*1.02; //adicionando a multa na conta.
    conta2=conta2*1.02;
    saldo=sal-conta1-conta2;

    printf("Saldo final:%.2f\n",saldo);
    
    return (EXIT_SUCCESS);
}

