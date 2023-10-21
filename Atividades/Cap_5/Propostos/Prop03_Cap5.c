#include <stdio.h>
#include <stdlib.h>


int main() {

    int idade,qnt1=0,qnt2=0,qnt3=0,qnt4=0,qnt5=0;
    float perc1=0,perc2=0;
    
    for(int i=0;i<8;i++){
        
        printf("Digite sua idade: ");
        scanf("%d",&idade);
        
        if(idade<=15){
            qnt1++;
            perc1++;
        }else{
            if(idade>15 && idade<=30){
                qnt2++;
            }else{
                if(idade>30 && idade<=45){
                    qnt3++;
                }else{
                    if(idade>45 && idade<=60){
                        qnt4++;
                    }else{
                        qnt5++;
                        perc2++;
                    }
                }
            }
        }
    }
    
    perc1=(perc1*100)/8;
    perc2=(perc2*100)/8;
    
    printf("Primeira faixa etária: %d\nSegunda faixa etária: %d\nTerceira faixa etária: %d\nQuarta faixa etária: %d\nQuinta faixa etária: %d\n"
            "Porcentagem de pessoas na primeira faixa: %.2f\nPorcentagem de pessoas na quinta faixa: %.2f\n",qnt1,qnt2,qnt3,qnt4,qnt5,perc1,perc2);
    return (0);
}

