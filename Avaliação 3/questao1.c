#include <stdio.h>
#include <stdlib.h>

#define tam 100          //Constante para definir o número de termos que serão salvos em cada conjunto.

void conjunto_tri(int *tri){
    
    int n;
    
    for(n=1;n<=tam;n++){        //algoritmo para salvar o número de termos definido do conjunto triangulares
        tri[n]=(n*(n+1))/2;
    }
}

void conjunto_pen(int *pen){
    
    int n;
                        
    for(n=1;n<=tam;n++){            //algoritmo para salvar o número de termos definido do conjunto pentagonais
        pen[n]=(n*((3*n)-1))/2;       
    }
}

void conjunto_hep(int *hep){
    
    int n;
    
    for(n=1;n<=tam;n++){            //algoritmo para salvar o número de termos definido do conjunto heptagonais
        hep[n]=(n*((5*n)-3))/2;
    }
}

void verificar(int *tri, int *pen, int *hep){
    
    int i,j,k,cont;
    
    cont=0;
    i=1;
    while(i<=tam){     //algoritmo para verificar se algum número está presente nos três conjuntos
        j=1;
        while(j<=tam){
            
            if(tri[i]==pen[j]){
                k=1;
                while(k<=tam){
                    
                    if(tri[i]==hep[k]){
                        printf("\t%d",tri[i]);
                        cont++;
                    }
                k++;    
                }
                
            }
        j++;    
        }
    i++;    
    }
    
}


int main() {

    
    int tri[tam],pen[tam],hep[tam];
    
    conjunto_tri(&tri);
    conjunto_pen(&pen);
    conjunto_hep(&hep);
    printf("\nNúmeros que fazem parte dos três conjuntos:");
    verificar(&tri,&pen,&hep);
    
    
    
    return (0);
}

