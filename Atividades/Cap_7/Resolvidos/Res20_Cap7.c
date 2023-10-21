#include <stdio.h>
#include <stdlib.h>

#define lin 5
#define col 4

int main() {
    
    int i,j,k,l,m,n,posl,posc,num,mat[lin][col];
    
    printf("Preencha a matriz:\n");
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            scanf("%d",&num);
            if(i==0&&j==0){
                mat[i][j]=num;
            }else{
                k=0;
                l=0;
                while(num > mat[k][l] && (k!=i || l!=j)){
                    l++;
                    if(l>col){
                        k++;
                        l=0;
                    }
                }
                m=i;
                n=j;
                while(m!=k || n!=l){
                    if(n-1<0){
                        posl=m-1;
                        posc=col;
                    }else{
                        posl=m;
                        posc=n-1;
                    }
                    mat[m][n]=mat[posl][posc];
                    n--;
                    if(n<0){
                        n=col;
                        m--;
                    }
                }
                mat[k][l]=num;
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

