#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,cont=0,a[tam],b[tam+1];
    
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&a[i]);
        
        if(a[i]>0){
            b[cont]=a[i];
            cont++;
        }        
    }
    printf("Vetor B: ");
    for(i=0;i<cont;i++){
        printf(" %d ",b[i]);
    }
    
    
    
    
    return (0);
}

