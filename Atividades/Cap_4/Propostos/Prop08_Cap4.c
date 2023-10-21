#include <stdio.h>
#include <stdlib.h>




int main() {
    
    float sal;
    
    printf("Digite o valor do salário atual: ");
    scanf("%f",&sal);
    
    if(sal<=300.0){
        sal=sal*1.35;
        printf("Salário reajustado: %.2f\n",sal);
    }
    else{
        sal=sal*1.15;
        printf("Salário reajustado: %.2f\n",sal);
    }
    
    return (0);
}
