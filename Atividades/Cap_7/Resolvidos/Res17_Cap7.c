#include <stdio.h>
#include <stdlib.h>

#define tam 5

int main() {

    int i,j,num,cont=0,cont2=0,cont3=0,linac=0,colac=1,linab=1,colab=0,mat[tam][tam];
    
    
    while(cont<5 || cont2<10 || cont3<10){
        printf("Digite um número: ");
        scanf("%d",&num);

        if(num%5==0){
            if(cont<5){
                mat[cont][cont]=num;
                cont++;
            }else{
                printf("Diagonal totalmente preenchida.\n");
            }
        }else{
            if(num%11==0){
                if(cont2<10){
                    mat[linac][colac]=num;
                    colac++;
                    if(colac>4){
                        linac++;
                        colac=linac+1;
                    }
                    cont2++;
                }else{
                    printf("Não existe espaço acima da diagonal principal.\n");
                }
            }else{
                if(num%13==0){
                    if(cont3<10){
                        mat[linab][colab]=num;
                        linab++;
                        if(linab>4){
                            colab++;
                            linab=colab+1;
                        }
                        cont3++;
                    }else{
                        printf("Não existe espaço abaixo da diagonal principal.\n");
                    }
                }else{
                    printf("Número inválido.\n");   
                }   
            }
        }
    }
    printf("\nMATRIZ:");
    for(i=0;i<tam;i++){
        printf("\nLinha %d: ",i);
        for(j=0;j<tam;j++){
            printf(" %d ",mat[i][j]);
        }
    }
    
    return (0);
}

