#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float sal;
    
    printf("Digite o valor do salário atual: ");
    scanf("%f",&sal);
    
    if(sal<500.0){
        sal=sal*1.3;
        printf("Salário reajustado: %.2f\n",sal);
    }
    else{
        printf("Salário não sofrerá aumento.\n");
    }
    
    return(0);
    
}
