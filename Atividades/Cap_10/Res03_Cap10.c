#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * 
 */

#define tam 10
int main() {
    
    srand(time(NULL));
    
    int i,j,k,x,cont,verf=0,r[tam*2][2],ref[tam*2][2],sim[tam*2][2];
    
    for(i=0;i<tam;i++){
        for(j=0;j<2;j++){           //CRIA RELAÃ‡ÃƒO ALEATÃ“RIA
            r[i][j]=rand()%5;
        }
    }
    
    for(i=0;i<tam;i++){
        j=i;
        while(j>0 && (r[j][0]<r[j-1][0] || (r[j][1]<r[j-1][1] && r[j][0]==r[j-1][0]))){
            x=r[j][0];
            r[j][0]=r[j-1][0];
            r[j-1][0]=x;                    //ORDENA RELAÃ‡ÃƒO
            x=r[j][1];
            r[j][1]=r[j-1][1];
            r[j-1][1]=x;
            j--;
        }
    }
    printf("R= ");
    for(i=0;i<tam;i++){
        for(j=0;j<2;j++){               //MOSTRA RELAÃ‡ÃƒO
            if(j==0){
                printf("(%d,",r[i][j]);
            }else{
                printf("%d) ",r[i][j]);
            }
        }
    }
    
    
    cont=0;
    for(k=0;k<5;k++){
        i=0;
        verf=0;
        while(i<tam){
            ref[i][0]=r[i][0];
            ref[i][1]=r[i][1];                       //VERIFICA SE RELAÃ‡ÃƒO Ã‰ REFLEXIVA
            if(k==r[i][0] && k==r[i][1]){
                verf++;
            }
            i++;
        }
        if(verf==0){
            ref[tam+cont][0]=k;
            ref[tam+cont][1]=k;
            cont++;
        }
    }
    printf("\n\nR*(reflexivo)= ");
    for(i=0;i<tam+cont;i++){
        for(j=0;j<2;j++){               //MOSTRA RELAÃ‡ÃƒO
            if(j==0){
                printf("(%d,",ref[i][j]);
            }else{
                printf("%d) ",ref[i][j]);
            }
        }
    }
    
    cont=0;
    for(i=0;i<tam;i++){
        sim[i][0]=r[i][0];
        sim[i][1]=r[i][1]; 
        j=0;
        verf=0;                         //VERIFICA SE RELAÃ‡ÃƒO Ã‰ SiMÃ‰TRICA
        for(j=0;j<tam;j++){
            if(r[i][0]==r[j][1] && r[i][1]==r[j][0]){
                verf++;

            }
        }
        if(verf==0){
            sim[tam+cont][0]=r[i][1];
            sim[tam+cont][1]=r[i][0];
            cont++;
        }
    }
    printf("\nR*(simÃ©trico)= ");
    for(i=0;i<tam+cont;i++){
        for(j=0;j<2;j++){               //MOSTRA RELAÃ‡ÃƒO
            if(j==0){
                printf("(%d,",sim[i][j]);
            }else{
                printf("%d) ",sim[i][j]);
            }
        }
    }
    
    return 0;
}    