#include <stdio.h>
#include <stdlib.h>

#define lin 10
#define col 3

int main() {

    int i,j,menor,cont,contp[col],mprova[lin],nota[lin][col];
    
    for(i=0;i<col;i++){
        contp[i]=0;
    }
    
    for(i=0;i<lin;i++){
        printf("\nAluno %d:\n",i);
        cont=0;
        menor=0;
        for(j=0;j<col;j++){
            printf("Digite a nota da prova %d: ",j+1);
            scanf("%d",&nota[i][j]);
            
            if(j==0){
                menor=nota[i][j];
                mprova[i]=j+1;
                cont++;
            }else{
                if(nota[i][j]<menor){
                    mprova[i]=j+1;
                    cont++;
                }
            }
        }
        if(cont==1){
            contp[0]++;
        }
        if(cont==2){
            contp[1]++;
        }
        if(cont==3){
            contp[2]++;
        }
    }
    printf("\n\nRELATÓRO:\n");

    for(i=0;i<lin;i++){
        printf("Aluno: %d\nMenor nota na prova %d\n",i,mprova[i]);
    }
    for(i=0;i<col;i++){
        printf("Quantidade de alunos com menor nota na prova %d: %d\n",i+1,contp[i]);
    }
    
    return (0);
}

