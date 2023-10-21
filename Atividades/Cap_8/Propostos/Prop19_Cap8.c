#include <stdio.h>
#include <stdlib.h>

#define tam 10


int interseção(int *x, int *y,int *in){
    
    int i,j,k,cont1,cont_i;
    
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(x[i]==y[j]){                 //processo para encontrar valores 
                if(cont_i==0){              //repetidos nos vetores x e y
                    in[cont_i]=x[i];
                    cont_i++;
                }else{
                    k=0;
                    cont1=0;
                    while(k<cont_i && x[i]!=in[k]){
                        k++;
                        if(k>=cont_i){
                            in[cont_i]=x[i];
                            cont1++;
                        }
                    }
                    if(cont1==1){
                        cont_i++;
                    }
                }
            }
        }
    }
    return cont_i;
}


int main() {

    int i,cont,in[tam],vet[tam],vet2[tam];
    
    printf("Preencha o primeiro vetor:\n");
    for(i=0;i<tam;i++){
        printf("Posição[%d]: ",i);
        scanf("%d",&vet[i]);
    }
    printf("Preencha o segundo vetor:\n");
    for(i=0;i<tam;i++){
        printf("Posição[%d]: ",i);
        scanf("%d",&vet2[i]);
    }
    
    cont=interseção(&vet,&vet2,&in);
    
    printf("\nInterseção dos vetores: ");
    for(i=0;i<cont;i++){
        printf(" %d ",in[i]);
    }
    
    return (0);
}

