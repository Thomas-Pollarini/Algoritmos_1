#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int cod,nvei,nacid,soma,maior,menor,cmaior,cmenor,ncid;
    float mediav,mediaa;
    
    soma=0;
    mediaa=0;
    ncid=0;
            
    int i;
    for(i=0;i<5;i++){
        printf("Digite o código da cidade: ");
        scanf("%d",&cod);
        printf("Digite o número de veículos de passeio: ");
        scanf("%d",&nvei);
        printf("Digite o número de acidentes de trânsito com vítimas: ");
        scanf("%d",&nacid);
        
        //algoritmo para separar maior indice de acidente e a qual cidade pertence
        if(i==0){
            maior=nacid;
            cmaior=cod;
            menor=nacid;
            cmenor=cod;
        }else{
            if(maior<nacid){
                maior=nacid;
                cmaior=cod;
            }
            if(menor>nacid){
                menor=nacid;
                cmenor=cod;
            }
        }
        
        soma=soma+nvei;
        
        if(nvei<2000){
            
            mediaa=mediaa+nacid;
            ncid++;
        }
    }
    mediav=soma/5.0;
        
    printf("Maior indice de acidentes: %d\nCódigo da cidade: %d\nMenor indice de acidentes: %d\nCódigo da cidade: %d\n",maior,cmaior,menor,cmenor);
    printf("Média de veiculos nas cinco cidades: %f\n",mediav);
    if(ncid==0){
        printf("Não foi digitada nenhuma cidade com menos de 2000 veículos.");
    }else{
        mediaa=mediaa/ncid;
        printf("Média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio: %f\n",mediaa);
    }
    
    return (0);
}

