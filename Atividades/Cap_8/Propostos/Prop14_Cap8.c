#include <stdio.h>
#include <stdlib.h>

#define tam 30

int separar_vetor(int *x, int *a, int *b){
    
    int i,cont=0,cont2=0;
    
    for(i=0;i<tam;i++){
        if(x[i]>0){
            a[cont]=x[i];
            cont++;
        }else{
            b[cont2]=x[i];
            cont2++;
        }
    }
    
    return cont;
}

 
int main() {

    int i,cont=0,cont2=0,x[tam],a[tam],b[tam];
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        printf("Posição[%d]: ",i);
        scanf("%d",&x[i]);
    }
    
    cont=separar_vetor(&x,&a,&b);
    cont2=tam-cont;
    
    printf("\nVETOR A: ");
    for(i=0;i<cont;i++){
        printf(" %d ",a[i]);
    }
    printf("\nVETOR B: ");
    for(i=0;i<cont2;i++){
        printf(" %d ",b[i]);
    }
    
    return (0);
}

