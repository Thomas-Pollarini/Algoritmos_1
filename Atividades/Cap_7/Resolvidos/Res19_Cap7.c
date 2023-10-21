#include <stdio.h>
#include <stdlib.h>

#define lin 5
#define col 4

int main() {

    int i,j,x,num,par=0,impar=0,linp=0,lini=1,contp=0,conti=0,mat[lin][col];
    
    while(x!=(lin*col)){
        printf("Digite um número: ");
        scanf("%d",&num);
        
        if(num%2==0){
            if(par<12){
                mat[linp][contp]=num;
                contp++;
                if(contp>3){
                    contp=0;
                    linp+=2;
                }
                x++;
                par++;
            }else{
                printf("Não há mais espaçó para números pares.\n");
            }
        }else{
            if(impar<8){
                mat[lini][conti]=num;
                conti++;
                if(conti>3){
                    conti=0;
                    lini+=2;
                }
                x++;
                impar++;
            }else{
                printf("Não há mais espaçó para números ímpares.\n");
            }    
        }
    }
    printf("\nMATRIZ:");
    for(i=0;i<lin;i++){
        printf("\nLinha %d: ",i);
        for(j=0;j<col;j++){
            printf(" %d ",mat[i][j]);
        }
    }
    
    return (0);
}

