#include <stdio.h>
#include <stdlib.h>

#define tam 10

int maior_ac(int mat[][tam]){
    
    int i,cont=0,maior,lin_ac=1,col_ac=0;
    
    for(i=1;i<tam;i++){
        cont+=i;
    }
    
    i=0;
    while(i<=cont){
        if(i==0){
            maior=mat[lin_ac][col_ac];
            col_ac++;
            i++;
        }else{
            if(mat[lin_ac][col_ac]>maior){
                maior=mat[lin_ac][col_ac];
            }
            col_ac++;
            if(col_ac==tam){
                lin_ac++;
                col_ac=lin_ac+1;
            }
            i++;
        }
    }
    printf("\n%d\n",cont);
    return maior;
}

int main() {
    
    int i,j,maior,mat[tam][tam];
    
    printf("Preencha a matriz:\n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("Posição[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    
    maior=maior_ac(&mat);
    
    printf("\nMaior elemento acima da diagonal principal: %d\n",maior);

    return (0);
}

