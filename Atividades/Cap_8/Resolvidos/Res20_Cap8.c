#include <stdio.h>
#include <stdlib.h>

#define tam 12

int i,j;

int media_abdiagonal(int mat[][tam]){
    
    int cont,linab,colab;
    float media=0;
    
    linab=1;
    colab=0;
    while(cont<15){
        media+=mat[linab][colab];
        colab++;
        if(colab>=linab){
            linab++;
            colab=0;
        }
        cont++;
    }
    media/=cont;
    
}

int main() {

    int mat[tam][tam];
    float media;
    
    printf("preencha a matriz:\n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("Posição[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    
    media=media_abdiagonal(&mat);
    
    printf("\nMédia dos elementos abaixo da diagonal principal: %.2f\n",media);
    
    return (0);
}

