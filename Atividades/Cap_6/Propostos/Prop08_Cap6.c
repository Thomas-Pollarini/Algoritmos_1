#include <stdio.h>
#include <stdlib.h>

#define tam 7

int main() {

    int i,cod[tam],maiorcod;
    float med[tam],maiorm,rec;
    
    for(i=0;i<tam;i++){
        printf("Código do aluno: ");
        scanf("%d",&cod[i]);
        printf("Digite a média do aluno: ");
        scanf("%f",&med[i]);
        
        if(i==0){
            maiorm=med[i];
            maiorcod=cod[i];
        }else{
            if(med[i]>maiorm){
                maiorm=med[i];
                maiorcod=cod[i];
            }
        }
        if(med[i]>=7){
            printf("\nAPROVADO\n\n");
        }else{
            rec=10.0-med[i];
            printf("\nReprovado, terá que tirar %.2f no exame final para ser aprovado.\n\n",rec);
        }
    }
    printf("Aluno com maior nota: %d\n",maiorcod);
    
    
    return (0);
}

