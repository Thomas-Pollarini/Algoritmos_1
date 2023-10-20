#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 300


int main() {

    srand(time(NULL));
    int i,c1,c2,c3,cont,n[tam],pos[tam/3];
    
    
    for(i=0;i<tam;i++){     //algoritmo para gerar cadeia aleatória.
        n[i]=rand()%4+1;
        
    }
    
    printf("Digite o primeiro valor do códon(de 1 a 4): ");
    scanf("%d",&c1);
    printf("Digite o segundo valor do códon(de 1 a 4): ");
    scanf("%d",&c2);
    printf("Digite o terceiro valor do códon(de 1 a 4): ");
    scanf("%d",&c3);
    printf("\nCódon: %d%d%d",c1,c2,c3);
    
    cont=0;
    for(i=0;i<tam;i+=3){            //algoritmo para verificar todas posições
        if(n[i]==c1){               //de códon e salvar as posições onde o códon
            if(n[i+1]==c2){         //se repete.
                if(n[i+2]==c3){
                    pos[cont]=i+1;
                    cont++;
                }
            }
        }
    }
    
    if(cont==0){                                //algoritmo para informar o resultado da pesquisa.
        printf("\nCódon não encontrado!.");
    }else{
        printf("\nCódon entrado nas posições: ");
        for(i=0;i<cont;i++){
            printf(" %d ",pos[i]);
        }
    }
    return (0);
}

