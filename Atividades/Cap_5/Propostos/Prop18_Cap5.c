#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade,maiori,menori,cont1=0,conti=1,conts=0,codi;
    float sal,medias=0,menors;
    char sexo,cods;
    
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    
    while(idade>0){
        
        printf("Digite seu sexo(M/F): ");
        scanf(" %c",&sexo);
        printf("Digite o valor do seu salário: ");
        scanf("%f",&sal);
        
        medias=medias+sal;
        cont1++;
        
        if(conti==1){
            maiori=idade;
            menori=idade;
            conti++;
            menors=sal;
            codi=idade;
            cods=sexo;
        }else{
            if(idade>maiori){
                maiori=idade;
            }
            if(idade<menori){
                menori=idade;
            }
        }
        if(sal<menors){
            codi=idade;
            cods=sexo;
        }
        
        if(sexo==70){
            if(sal<=200.0){
                conts++;
            }
        }
        
        printf("Digite sua idade: ");
        scanf("%d",&idade);
        
        
    }
    
    medias=medias/cont1;
    
    printf("Média dos salários do grupo: %.2f\nMaior idade do grupo: %d\nMenor idade do grupo: %d\n"
            "Quantidade de mulheres com salário até R$ 200,00: %d\nIdade da pessoa que possui o menor salário: %d\n"
            "Sexo da pessoa que possui o menor salário: %c\n",medias,maiori,menori,conts,codi,cods);
    
    
    return (0);
}

