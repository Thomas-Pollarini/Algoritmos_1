#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int contb=0,contc=0,contn=0;
    float vlru,vlre,vlrf,imp,mvlre=0,mimp=0,maior,menor;
    char ref,cat;
                                //A=65,L=76,V=86,S=83,N=78
    for(int i=0;i<12;i++){
        
        printf("Digite o preço unitário do produto: ");
        scanf("%f",&vlru);
        printf("Digite o tipo de refrigeração do produto: ");
        scanf(" %c",&ref);
        printf("Digite a categoria do produto: ");
        scanf(" %c",&cat);
    
        //algoritmo para definir custo de estocagem.
        
        if(vlru<=20.0){
            if(cat==65){
                vlre=2.0;
            }else{
                if(cat==76){
                    vlre=3.0;
                }else{
                    if(cat==86){
                        vlre=4.0;
                    }
                }    
            }
        }else{
            if(vlru>20.0 && vlru<=50.0){
                if(ref==83){
                    vlre=6.0;
                }else{
                    if(ref==78){
                        vlre=0.0;
                    }
                }    
            }else{
                if(ref==83){
                    if(cat==65){
                        vlre=5.0;
                    }else{
                        if(cat==76){
                            vlre=2.0;
                        }else{
                            if(cat==86){
                                vlre=4.0;
                            }
                        }    
                    }
                }else{
                    if(ref==78){
                        if(cat==65 || cat==86){
                            vlre=0;
                        }else{
                            if(cat==76){
                                vlre=1.0;
                            }
                        }
                    }
                }
            }
        }        
        
        if(cat!=65 && ref!=83){
            imp=vlru*0.02;
        }else{
            imp=vlru*0.04;
        }
        
        vlrf=vlru+vlre+imp;
        
        printf("Custo de estocagem: %.2f\nImposto: %.2f\nPreço final: %.2f\n",vlre,imp,vlrf);
        
        if(vlrf<=20.0){
            printf("Classificação: Barato\n");
            contb++;
        }else{
            if(vlrf>20.0 && vlrf<=100.0){
                printf("Classificação: Normal\n");
                contn++;
            }else{
                printf("Classificação: Caro\n");
                contc++;
            }
        }
        
        mvlre = mvlre+vlre;
        mimp = mimp + imp;
        
        if(i==0){
            maior=vlrf;
            menor=vlrf;
        }else{
            if(vlrf>maior){
                maior=vlrf;
            }
            if(vlrf<menor){
                menor=vlrf;
            }
        }
        
    }
    
    printf("Total dos impostos: %.2f\n",mimp);
        
    mvlre=mvlre/12.0;
    mimp=mimp/12.0;
    
    printf("Média dos custos de estocagem: %.2f\nMédia dos impostos: %.2f\n",mvlre,mimp);
    
    printf("Maior preço final: %.2f\nMenor preço final: %.2f\n",maior,menor);
    
    printf("Quantidade de produtos com classificação barato: %d\nQuantidade de produtos com classificação normal: %d\n"
            "Quantidade de produtos com classificação caro: %d\n",contb,contn,contc);
    
    
    return (0);
}

