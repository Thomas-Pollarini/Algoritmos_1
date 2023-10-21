#include <stdio.h>
#include <stdlib.h>

#define lin 15
#define col 5

int main() {

    int i,j,k,l,num,cont,qntd,mat[lin][col],rep[(lin*col)/2],vezes[(lin*col)/2];
    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        printf("\nLinha %d:\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    cont=0;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            num=mat[i][j];
            qntd=0;
            for(k=0;k<lin;k++){
                for(l=0;l<col;l++){
                    if(num==mat[k][l]){
                        qntd++;
                    }
                }
            }
            if(qntd>1){
                if(cont==0){
                    rep[cont]=num;
                    vezes[cont]=qntd;
                    cont++;
                }else{
                    l=0;
                    for(k=0;k<cont;k++){
                        if(num==rep[k]){
                            l++;
                        }
                    }
                    if(l==0){
                        rep[cont]=num;
                        vezes[cont]=qntd;
                        cont++;
                    }
                }
                
            }
        }
    }
    printf("\nNúmeros repetidos: ");
    for(i=0;i<cont;i++){
        printf(" %d ",rep[i]);
    }
    printf("\nNúmero de vezes:   ");
    for(i=0;i<cont;i++){
        printf(" %d ",vezes[i]);
    }
    
    
    return (0);
}

