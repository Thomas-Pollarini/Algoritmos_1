#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,vet[tam],cont=0,cont2,num=101;
            
    while(cont<=9){
        cont2=0;
        for(i=1;i<=num;i++){
            if(num%i==0){
                cont2++;
            }
            
        }
        if(cont2==2){
            vet[cont]=num;
            cont++;
            }
        num+=1;
    }
    printf("VETOR: ");
    for(i=0;i<cont;i++){
        printf(" %d ",vet[i]);
    }
            
    return (0);
}

