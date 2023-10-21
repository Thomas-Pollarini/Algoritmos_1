#include <stdio.h>
#include <stdlib.h>

int main() {

    int cod,aula,contm=0,contf=0;
    float salb,sal,mediam=0,mediaf=0,desc;
    char sexo;
    
    printf("Digite o código do professor: ");
    scanf("%d",&cod);
    
    while(cod!=99999){
    
        printf("Digite o sexo do professor: ");
        scanf(" %c",&sexo);
        printf("Digite o número de aulas aplicadas mensalmente pelo professor: ");
        scanf("%d",&aula);
        
        salb=aula*30.0;
    
        if(sexo==77){
            desc=salb*0.1;
            contm++;
            sal=salb-desc;
            mediam=mediam+sal;
        }
        if(sexo==70){
            desc=salb*0.05;
            contf++;
            sal=salb-desc;
            mediaf=mediaf+sal;
        }
        
        printf("Código do professor: %d\nSalário bruto: %.2f\nSalário líquido: %.2f\n",cod,salb,sal);
        
        printf("Digite o código do professor: ");
        scanf("%d",&cod);
        
    }
    
    mediam=mediam/contm;
    mediaf=mediaf/contf;
    
    printf("Média dos salários líquidos dos professores do sexo masculino: %.2f\n",mediam);
    printf("Média dos salários líquidos dos professores do sexo feminino: %.2f\n",mediaf);    
        
        
    return (0);
}

