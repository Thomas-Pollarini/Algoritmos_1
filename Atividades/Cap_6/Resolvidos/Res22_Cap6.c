#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {

    int i,j,x,c,m,cod[tam];
    float saldo[tam],dep,saq,soma=0;
    
    for(i=0;i<tam;i++){
        printf("Digite o código do cliente: ");
        scanf("%d",&cod[i]);
        j=0;
        while(i!=j){
            while(cod[i]!= cod[j]){
                j++;
            }
            if(j!=i){
                printf("Código de cliente já existe.\nDigite outro código: ");
                scanf("%d",&cod[i]);
                j=0;
            }
        }
        printf("Digite o saldo do cliente: ");
        scanf("%f",&saldo[i]);
    }
    
    while(x!=4){
        printf("\n\nMenu:\n1. Efetuar depósito\n2. Efetuar saque\n3. Consultar o ativo bancário, ou seja, o somatório dos saldos de todos os clientes\n"
                "4. Finalizar o programa\nDigite a opção desejada: ");
        scanf("%d",&x);
    
        switch(x){
            case 1:
                printf("\nDigite o código da conta: ");
                scanf("%d",&c);
                j=0;
                for(i=0;i<tam;i++){
                    if(c==cod[i]){
                        j=1;
                        m=i;
                    }
                }
                if(j==1){
                    printf("Digite o valor do depósito: ");
                    scanf("%f",&dep);
                    saldo[m]+=dep;
                    printf("\nSALDO ATUALIZADO.");
                }else{
                    printf("\nCONTA NÃO ENCONTRADA.");
                }
                break;
                
            case 2:
                printf("\nDigite o código da conta: ");
                scanf("%d",&c);
                j=0;
                for(i=0;i<tam;i++){
                    if(c==cod[i]){
                        j=1;
                        m=i;
                    }
                }
                if(j==1){
                    printf("Digite o valor do saque: ");
                    scanf("%f",&saq);
                    if(saq<=saldo[m]){
                        saldo[m]-=saq;
                        printf("\nSALDO ATUALIZADO.");
                    }else{
                        printf("\nSALDO INSUFICIENTE, SAQUE RECUSADO.");
                    }
                }else{
                    printf("\nCONTA NÃO ENCONTRADA.");
                }
                break;
        
            case 3:    
                soma=0;
                for(i=0;i<tam;i++){
                    soma+=saldo[i];
                }
                printf("\nATIVO BANCÁRIO: %.2f",soma);
                break;
              
            case 4:
                return (0);
                break;
             
            default:
                printf("\nOPÇÃO INVÁLIDA");
        }
    }
    
    
    return (0);
}

