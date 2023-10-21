#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    float E=1,fat;
    
    printf("Digite o valor de N: ");
    scanf("%d",&n);
    
    int i;
    for (i = 1; i <= n; i++) {
        fat=1;
        int j;      
        for(j = 1; j <= i; j++){
            fat=fat * j;
        }
      
    E = E + (1.0/fat);
           
    }

    printf("Valor de E: %f",E);
    

    return (0);
}

