#include <stdio.h>
#include <stdlib.h>

int calculadora(){
    
    int n1,n2,res,cont=0;
    char cod;
    
    do{
    printf("Digite o símbolo(+,*):");
    scanf(" %c",&cod);
    if(cod=='+' || cod=='*'){
        cont++;
    }
    }while(cont==0);
    printf("Digite dois números:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    
    switch(cod){
        
        case '+':
            res=n1+n2;
            break;
            
        case '*':
            res=n1*n2;
    }
    
    return res;
}    

int main() {

    int res;
    
    res=calculadora();
    
    printf("\nRESULTADO: %d\n",res);
    
    return (0);
}

