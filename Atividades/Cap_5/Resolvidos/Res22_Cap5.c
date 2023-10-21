#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade,qntdm=0,qntdf=0,contm=0,contf=0,menor=0,cont=0;
    float imedh=0,percm=0;
    char sexo,exp;
    
    printf("Digite a idade do candidato: ");
    scanf("%d",&idade);
    
    while(idade!=0){
        
        printf("Digite o sexo do candidato(M/F): ");
        scanf(" %c",&sexo);
        printf("O candidato tem experiência?(S/N):");
        scanf(" %c",&exp);
        
        if(sexo==77){//M=77
            qntdm++;
            //media idade homens c/ experiencia
            if(exp==83){//S=83
                imedh=imedh+idade;
                contm++;
            }
            
            //idade > 45
            if(idade>45){
                percm++;
            }
        }
        if(sexo==70){//F=70
            qntdf++;
            
            if(exp==83){
                if(idade<21){//número mulheres < 21 anos c/ exp
                    contf++;
                }
                
                if(cont==0){        //menor idade c/ exp
                    menor=idade;
                    cont++;
                }
                if(idade<menor){    //menor idade c/ exp
                    menor=idade;
                }
            }
        }
        
        printf("Digite a idade do candidato: ");
        scanf("%d",&idade);
    }
    
    imedh=imedh/contm;
    percm=(percm*100.0)/qntdm;
    
    printf("Número de candidatos do sexo feminino: %d\nNúmero de candidatos do sexo masculino: %d\n"
            "Idade média dos homens que já têm experiência no serviço: %.2f\nPorcentagem dos homens com mais de 45 anos entre o total dos homens: %.2f%%\n"
            "Número de mulheres com idade inferior a 21 anos e com experiência no serviço: %d\n"
            "Menor idade entre as mulheres que já têm experiência no serviço: %d\n",qntdf,qntdm,imedh,percm,contf,menor);
    
    return (0);
}

