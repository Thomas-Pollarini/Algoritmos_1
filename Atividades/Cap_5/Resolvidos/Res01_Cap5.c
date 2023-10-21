#include <stdio.h>
#include <stdlib.h>

int main() {

    int ano;
    float sal=1000,aum=0.0075;
    
    printf("Digite o ano atual: ");
    scanf("%d",&ano);
    
    ano= ano - 2005;
    
    for(int i = 0; i < ano; i++){
        aum=aum * 2;  
        sal= sal * (aum + 1);
    }

    printf("Salário atual: %.2f",sal);
    
    
    
    return (0);
}

