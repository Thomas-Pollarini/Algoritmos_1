#include <stdio.h>
#include <stdlib.h>

#define tam 4

int main() {

    int i,cod[tam];
    float n1[tam],n2[tam],med[tam],soma=0,perca=0,percr=0;
    char class[i];
    
    for(i=0;i<tam;i++){
        printf("Digite o código do aluno: ");
        scanf("%d",&cod[i]);
        printf("Digite a nota da 1º prova: ");
        scanf("%f",&n1[i]);
        printf("Digite a nota da 2º prova: ");
        scanf("%f",&n2[i]);
        
        med[i]=(n1[i]+n2[i])/2.0;
        
        if(med[i]>=7){
            perca++;
            class[i]='A';
        }else{
            percr++;
            class[i]='R';
        }
        soma+=med[i];
        
    }
    
    printf("código:     1º prova:       2º prova:       Média:       Situação:");
    for(i=0;i<tam;i++){
    printf("\n  %d           %.2f            %.2f          %.2f            %c   ",cod[i],n1[i],n2[i],med[i],class[i]);
    }
    soma=soma/tam;
    perca=(perca*100)/tam;
    percr=(percr*100)/tam;
    printf("\nMédia da classe: %.2f\nPorcentagem de aprovados: %.2f%%\nPorcentagem de reprovados: %.2f%%\n",soma,perca,percr);
    
    return (0);
}

