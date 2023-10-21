#include <stdio.h>
#include <stdlib.h>

int main() {

    int hrt,cod;
    float vhr,sali,aux,salf;
    char turno,cat;
    //char a='M',b='V',c='N',d='O',e='G',f='m';
    //int  ab=77,bb=86, cb=78,db=79,eb=71,fb=109;
    
    int i;
    for(i=0;i<10;i++){
        
        printf("Digite o código do funcionario: ");
        scanf("%d",&cod);
        printf("Digite o número de horas trabalhadas: ");
        scanf("%d",&hrt);
        printf("Digite o turno de trabalho: ");
        scanf(" %c",&turno);
        //algoritmo para validar turno
        while(turno!= 77 && turno!=86 && turno!=78){
            printf("Turno digitado invalido.Digite um turno de trabalho válido: ");
            scanf(" %c",&turno);
        }
        printf("Digite a categoria: ");
        scanf(" %c",&cat);
        
        while(cat!= 79 && cat!=71){
            printf("Turno digitado invalido.Digite um turno de trabalho válido: ");
            scanf(" %c",&cat);
        }
        
        if(cat==71){
            if(turno==78){
                vhr=450.00*0.18;
            }else{
                vhr=450.00*0.15;
            }    
        }else{
            if(turno==78){
                vhr=450.00*0.13;
            }else{
                vhr=450.00*0.1;
            }    
        }
       
        sali=vhr*hrt;
        
         if(sali<=300.0){
             aux=sali*0.2;
        }else{
             if(sali>300.0 && sali<=600.0){
                 aux=sali*0.15;
             }else{
                 aux=sali*0.05;
             }
        }   
        
        salf=sali+aux;
        
        printf("Código do funcionário: %d\nNúmero de horas trabalhadas: %d\nValor da hora trabalhada: %.2f\n"
                "Salário inicial: %.2f\nAuxílio alimentação: %.2f\nSalário final: %.2f\n",cod,hrt,vhr,sali,aux,salf);
                
    }
    
    return (0);
}

