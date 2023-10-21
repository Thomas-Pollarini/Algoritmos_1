#include <stdio.h>
#include <stdlib.h>

int main() {

    int n,n1=2,n2=7,n3=3;
    
    printf("Digite o número de termos: ");
    scanf("%d",&n);
    
    printf("s= %d, %d, %d",n1,n2,n3);
    
    int i=0;
    while(i != n){
        
        if(i!=n){
            n1=n1*2;
            printf(", %d",n1);
            i++;
            if(i!=n){
                n2=n2*3;
                printf(", %d",n2);
                i++;
                if(i!=n){
                    n3=n3*4;
                    printf(", %d",n3);
                    i++;
                }
            }        
        }
    }
    
    return (0);
}

