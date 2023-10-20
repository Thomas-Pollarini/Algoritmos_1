#include <stdio.h>
#include <stdlib.h>     //IMPORTANTE: O exercicio não cria uma regra sobre quando caminho chega a última coluna,  
#include <time.h>       //isso gerou um bug no programa, então tomei a liberdade de fazer o caminho descer 
                        //automaticamente quando chega a última coluna.
#define tam 20

void caminho(int mat[][tam]){
    
    int i,j,cont,soma,menor[tam];
    char dir[tam*2];
  
    soma=0;
    cont=0;
    while (i!=(tam-1) || j!=(tam-1)){
        
        if(cont==0){
            for(i=0;i<tam;i++){
                for(j=0;j<tam;j++){     //algoritmo para definir o menor termo de cada linha
                    
                    if(j==0){
                        menor[i]=mat[i][j];
                    }else{
                        if(mat[i][j]<menor[i]){
                            menor[i]=mat[i][j];
                        }
                    }
                }
            }
            
            for(i=0;i<tam*2;i++){
                dir[i]=' ';          //algoritmo para limpar vetor do caminho 
            }
            
            i=0;
            j=0;
            soma+=mat[i][j];
        }
        
        if((mat[i][j]%menor[i]==0 || i==(tam-1))  &&  j!=tam-1){
                j++;
                dir[cont]='D';         //algoritmo para definir caminho
                soma+=mat[i][j];
                cont++;
                
        }else{
            i++;
            dir[cont]='B';
            soma+=mat[i][j];
            cont++;
        }
    }
    printf("\n\nCaminho = %s | Soma = %d\n",dir,soma);
    
    
}


int main() {
    
    srand(time(NULL));
    
    int i,j,mat[tam][tam];
    
    printf("MATRIZ:");      //algoritmo para definir a matriz
    for(i=0;i<tam;i++){    
        printf("\nLinha %d: ",i);
        for(j=0;j<tam;j++){
            mat[i][j]=rand()%500 + 1;
            printf(" %d ",mat[i][j]);
        }
    }
    
    caminho(&mat);
    
    
    return (0);
}

