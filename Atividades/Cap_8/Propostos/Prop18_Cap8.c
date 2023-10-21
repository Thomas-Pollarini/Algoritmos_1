#include <stdio.h>
#include <stdlib.h>

#define tam 3

void primo(){
    
    int i,j,x=0,cont;
    
    printf("Números primos depois de 100: ");
    
    i=101;
    while(x!=tam){
        cont=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                cont++;
            }
        }
        if(cont==2){
            printf(" %d ",i);
            x++;
        }
        i++;
    }
    
    
}

int main() {

    primo();

    return (0);
}
