#include <stdio.h>
#include <stdlib.h>



int main() {
    
    float n1,n2;
    
    printf("Digite dois números:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    
    if(n1==n2){
        printf("Os dois números são iguais.\n");
    }
    else{
        if(n1<n2){
            printf("O menor número é: %f.\n",n1);
        }
        else{
            printf("O menor número é: %f.\n",n2);
        }
    }
    
    return (0);
}

