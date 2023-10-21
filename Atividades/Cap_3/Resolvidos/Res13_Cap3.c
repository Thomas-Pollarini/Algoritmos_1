#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float n,r0,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;
    
    printf("Digite um número:");
    scanf("%f",&n);
    
    r0=n*0;
    r1=n*1.0;
    r2=n*2.0;
    r3=n*3.0;
    r4=n*4.0;
    r5=n*5.0;
    r6=n*6.0;
    r7=n*7.0;
    r8=n*8.0;
    r9=n*9.0;
    r10=n*10.0;
    
    printf("%.2f X 0 = %.2f\n"
            "%.2f X 1 = %.2f\n"
            "%.2f X 2 = %.2f\n"
            "%.2f X 3 = %.2f\n"
            "%.2f X 4 = %.2f\n"
            "%.2f X 5 = %.2f\n"
            "%.2f X 6 = %.2f\n"
            "%.2f X 7 = %.2f\n"
            "%.2f X 8 = %.2f\n"
            "%.2f X 9 = %.2f\n"
            "%.2f X 10 = %.2f\n",n,r0,n,r1,n,r2,n,r3,n,r4,n,r5,n,r6,n,r7,n,r8,n,r9,n,r10);
    
    return (EXIT_SUCCESS);
}

