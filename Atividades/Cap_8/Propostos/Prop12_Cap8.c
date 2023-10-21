#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int z){
    
    int i,mult=1;
    
    for(i=0;i<z;i++){
        mult*=x;
    }
    
    return mult;
}

int main() {

    int x,z,res;
    
    printf("Digite o valor de X: ");
    scanf("%d",&x);
    printf("Digite o valor de Z: ");
    scanf("%d",&z);
    
    res=potencia(x,z);
    
    printf("\nResultado: %d\n",res);
    return (0);
}

