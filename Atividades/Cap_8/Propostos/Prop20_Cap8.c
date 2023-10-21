#include <stdio.h>
#include <stdlib.h>


void pesquisa_prefeitura(float *maior,float *medias,float *mediaf,float *perc){
    
    int x=1,nf;
    float sal,aba,cont=0,cont2=0;
    
    while(x!=0){
        
        printf("Digite o valor so salário: ");
        scanf("%f",&sal);
        printf("Digite o número de filhos: ");
        scanf("%d",&nf);
        
        if(cont==0){
            *maior=sal;
        }else{
            if(sal>*maior){
                *maior=sal;
            }
        }
        
        *medias+=sal;
        *mediaf+=nf;
        
        if(sal<380){
            cont2++;
        }
        
        cont++;
        
        printf("\nMenu:\n0-Parar\n1-Continuar\n");
        scanf("%d",&x);
    }
    *medias/=cont;
    *mediaf/=cont;
    *perc=(cont2*100.0)/cont;
}

int main() {

    float perc=0,maior=0,medias=0,mediaf=0;
    
    
    
    pesquisa_prefeitura(&maior,&medias,&mediaf,&perc);
    
    printf("\nMédia dos salários: %.2f\nMédia de filhos: %.2f\nMaior salário: %.2f\n"
            "Porcentagem de pessoas c/ salário inferior a R$380: %.2f%%\n",medias,mediaf,maior,perc);
    
    return (0);
}

