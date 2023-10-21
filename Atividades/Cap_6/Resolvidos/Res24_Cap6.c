#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,j,cont,cont2=0,a[tam],rep[tam];
    
    printf("Preencha o vetor:\n");
    for(i=0;i<tam;i++){
        printf("Digite um número: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<tam;i++){
        cont=0;
        
        for(j=0;j<cont2;j++){
            if(a[i]==rep[j]){
                cont++;
            }
        }    
        if(cont==0){
            while(j<tam){
                if(a[i]==a[j]){
                    cont++;
                }
                j++;
            }    
            if(cont>1){
                printf("O número %d aparece %d vezes;\n",a[i],cont);
                rep[cont2]=a[i];
                cont2++;
            }
        }
    }
    
    
    return (0);
}

