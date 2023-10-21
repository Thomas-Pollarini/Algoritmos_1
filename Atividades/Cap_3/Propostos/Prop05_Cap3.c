#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

float sal,nsal,p,vp;

printf("Digite seu salário e o percentual de aumento que ira receber: \n");
scanf("%f",&sal);
scanf("%f",&p);

vp= (sal/100.0)*p;
nsal= sal*((p/100.0)+1.0);

printf("O valor de aumento é: %.2f \nSeu novo salario é: %.2f\n",vp,nsal);
    
    return (EXIT_SUCCESS);
}

