#include <stdio.h>
#include <stdlib.h>


int main() {

    int idade,cont1=0,cont2=0,cont3=0,cont4=0;
    float peso,p1=0,p2=0,p3=0,p4=0;
    
    for(int i=0;i<15;i++){
        
        printf("Digite a sua idade: ");
        scanf("%d",&idade);
        printf("Digite o seu peso: ");
        scanf("%f",&peso);
        
        
        if(idade>=1 && idade<=10){
            cont1++;
            p1=p1+peso;
        }else{
            if(idade>=11 && idade<=20){
                cont2++;
                p2=p2+peso;
            }else{
                if(idade>=21 && idade<=30){
                    cont3++;
                    p3=p3+peso;
                }else{
                    cont4++;
                    p4=p4+peso;
                }
            }
        }
    }
    
    p1=p1/cont1;
    p2=p2/cont2;
    p3=p3/cont3;
    p4=p4/cont4;
    
    printf("Média de peso entre 1 a 10 anos: %.2f\nMédia de peso entre 11 a 20 anos: %.2f\n"
            "Média de peso entre 21 a 30 anos: %.2f\nMédia de peso 31 anos para cima: %.2f\n",p1,p2,p3,p4);

    
    
    return (0);
}

