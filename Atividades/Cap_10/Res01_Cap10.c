#include <stdio.h>
#include <stdlib.h>

#define tam 3

typedef struct{
    int cod;
    float saldo;
    char nome[50];
}banco;

void cadastrar_conta(banco *cadastro){
    
    int i,cont;
   
    cont=0;
    while(cont<tam){
        
        if(cont==0){
            printf("\nDigite o número da conta: ");
            scanf("%d",&cadastro[cont].cod);
        }else{
            do{
                printf("\nDigite o número da conta: ");
                scanf("%d",&cadastro[cont].cod);
                i=0;
                while(cadastro[cont].cod!=cadastro[i].cod && i<cont){
                    i++;
                }
                if(i!=cont){
                    printf("\nCÓDIGO JÁ ESTÁ EM USO.\n");
                }
            }while(i!=cont);
        }
        printf("Digite o nome do cliente: ");
        scanf(" %s",&cadastro[cont].nome);
        printf("Digite o saldo da conta: ");
        scanf("%f",&cadastro[cont].saldo);
        
        cont++;
    }
    
}

void buscar_info(banco *cadastro){
    
    int i,x,ver;
    
    printf("\nDigite o número da conta: ");
    scanf("%d",&x);
   
    ver=0;
    i=0;
    while(ver!=1 && i<tam){
        if(x==cadastro[i].cod){
            ver++;
            x=i;
        }
        i++;
        
    }
    if(ver==1){ 
        printf("\nNúmero da conta: %d\nNome do cliente: %s\nSaldo da conta: %.2f\n",cadastro[x].cod,cadastro[x].nome,cadastro[x].saldo);
    }else{
        printf("\nCONTA NÃO EXISTE\n");
    }    
} 

void excluir_menor(banco *cadastro){
    
    int i,cod;
    float menor;
    
    for(i=0;i<tam;i++){
        if(i==0){
            menor=cadastro[i].saldo;
            cod=i;
        }else{
            if(cadastro[i].saldo<menor){
                menor=cadastro[i].saldo;
                cod=i;
            }
        }
    }
    
    cadastro[cod].cod=0;
    cadastro[cod].nome[0]="";
    cadastro[cod].saldo=0;
    
    printf("\nCONTA EXCLUÍDA\n");
    
}

int main() {

    int x;
    banco cadastro[tam];
    
    x=1;
    
    while(x!=0){
        printf("\nMenu de opções:\n1.Cadastrar contas.\n2.Visualizar informações de uma conta.\n3.Excluir conta com o menor saldo\n4.sair\nDigite a opção: ");
        scanf("%d",&x);
        
        switch(x){
            
            case 1:
                cadastrar_conta(&cadastro);
                break;
            
            case 2:
                buscar_info(&cadastro);
                break;
                
            case 3:
                excluir_menor(&cadastro);
                break;
                
            case 4: 
                return(0);
                
            default:
                printf("\nOPÇÃO INVÁLIDA\n");
        }
        
    }    
    
    
    return (0);
}

