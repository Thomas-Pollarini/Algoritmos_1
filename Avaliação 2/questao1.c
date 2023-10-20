#include <stdio.h>
#include <stdlib.h>


int main() {

    int i,n,num,cont,cont2;
    float s,den;
    
    printf("Digite o número de termos da série: ");
    scanf("%d",&n);
    
    //RA:0064232
    
    s=0;
    cont=1;
    cont2=1;
    num=2;
    for(i=1;i<=n;i++){
        
        if(i>1){        //algoritmo para definir númerador
            num+=3;
        }
        
        
        
        if(cont==1){            //algoritmo para definir denominador
            
            den=4;//4º dígito da matrícula
            cont++;             
        }else{
            if(cont==2){
                den=2;//5º dígito da matrícula
                cont++;
            }else{
                if(cont==3){
                    den=3;//6º dígito da matrícula
                    cont++;
                }else{
                    if(cont==4){
                        den=2;//7º dígito da matrícula
                        cont=1;
                    }
                }
            }
        }
        
        
        if(cont2==1 || cont2==2){ //algoritmo para definir o tipo de cálculo 
            s+=num/den;           //a ser feito (subtração ou adição).
            cont2++;
        }else{
            s-=num/den;
            cont2++;
            if(cont2==6){
                cont2=1;
            }
        }
    }
    printf("S = %f",s);
    
    return (0);
}

