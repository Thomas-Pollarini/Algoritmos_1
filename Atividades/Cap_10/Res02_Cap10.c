#include <stdio.h>
#include <stdlib.h>

#define tipos 4
#define dias 30 
#define svc 3

typedef struct{
    int cod;
    char desc[30];
}tipo;

typedef struct{
    int num,cods,codc;
    float vlr;
}serv;

void cadastrar_tipo(tipo *tserv){
    
    int i,cont;
    
    cont=0;
    while(cont<tipos){

        if(cont==0){
            printf("\nDigite o código do serviço: ");
            scanf("%d",&tserv[cont].cod);
        }else{
            do{
                printf("\nDigite o código do serviço: ");             //algoritmo para não repetir código de serviço
                scanf("%d",&tserv[cont].cod);
                i=0;
                while(tserv[i].cod!=tserv[cont].cod && i<cont){
                    i++;
                }
                if(i!=cont){
                    printf("\nCÓDIGO JÁ ESTÁ EM USO.");                    
                }
                
            }while(i!=cont);
        }
        printf("Digite a descrição do serviço: ");
        scanf("%s",&tserv[cont].desc);

        cont++;
    }
    
}

void cadastrar_servicos(tipo *tserv, serv mes[][svc], int *j,int descod[][svc]){
    
    int i,k,ver,cont;
    
    cont=0;
    
    for(i=0;i<dias;i++){
        j[i]=0;
    }
    
    while(cont!=dias*svc){
        do{//VERIFICAR SE É POSSIVEL FAZER SERVIÇOS NO DIA
            printf("\nDigite o dia: ");
            scanf("%d",&i);
            i--;
            if(j[i]==svc){
                printf("\nMÁXIMO DE SERVIÇOS DIÁRIOS ATINGIDO");
            }
        }while(j[i]==svc);
        
        ver=0;
        
        do{//VERIFICAR SE COD/ DE SERV/ EXISTE 
            printf("Digite o código do serviço: ");
            scanf("%d",&mes[i][j[i]].cods);
            k=0;
            while(mes[i][j[i]].cods!=tserv[k].cod && k<tipos){
                k++;
            }
            if(k!=tipos){
                descod[i][j[i]]=k;
                ver++;
            }
            if(ver==0){
                printf("\nCÓDIGO DE SERVIÇO NÃO CADASTRADO\n");
            }
            
        }while(ver==0);
        
        printf("Digite o código do cliente: ");
        scanf("%d",&mes[i][j[i]].codc);
        printf("Digite o número do serviço: ");
        scanf("%d",&mes[i][j[i]].num);
        printf("Digite o valor do serviço: ");
        scanf("%f",&mes[i][j[i]].vlr);
        cont++;
        j[i]++;
    }
    
}

void procurar_dia(tipo *tserv,serv mes[][svc],int descod[][svc]){
    
    int i,x;
    
    printf("\nDigite o dia: ");
    scanf("%d",&x);
    x--;
    
    printf("\nDIA %d:\n",x+1);
    for(i=0;i<svc;i++){
        printf("\nN° do serviço: %d\nValor do serviço: %.2f\nCódigo do serviço: %d\nDescrição: %s\nCódigo do cliente: %d\n",
                mes[x][i].num,mes[x][i].vlr,mes[x][i].cods,tserv[descod[x][i]].desc,mes[x][i].codc);
    }
    
    
}

void procurar_valor(tipo *tserv,serv mes[][svc],int descod[][svc]){
    
    int i,j;
    float min,max;
    
    printf("\nDigite o valor mínimo: ");
    scanf("%f",&min);
    printf("Digite o valor máximo: ");
    scanf("%f",&max);
    
    for(i=0;i<dias;i++){
        for(j=0;j<svc;j++){
            if(mes[i][j].vlr>=min && mes[i][j].vlr<=max){
                printf("\nN° do serviço: %d\nValor do serviço: %.2f\nCódigo do serviço: %d\nDescrição: %s\nCódigo do cliente: %d\n",
                mes[i][j].num,mes[i][j].vlr,mes[i][j].cods,tserv[descod[i][j]].desc,mes[i][j].codc);
            }
        }
    }
    
    
}

void mostrar_tudo(tipo *tserv,serv mes[][svc],int descod[][svc]){

    int i,j;
    
    for(i=0;i<dias;i++){
        printf("\nDIA %d:\n",i+1);
        for(j=0;j<svc;j++){
                printf("\nN° do serviço: %d\nValor do serviço: %.2f\nCódigo do serviço: %d\nDescrição: %s\nCódigo do cliente: %d\n",
                mes[i][j].num,mes[i][j].vlr,mes[i][j].cods,tserv[descod[i][j]].desc,mes[i][j].codc);
        }
    }
}    

int main() {

    int x,j[dias],descod[dias][svc];
    tipo tserv[tipos];
    serv mes[dias][svc];
            
    x=1;
    
    while(x!=0){
        printf("\nMenu de opções:\n1.Cadastrar os tipos de serviços.\n2.Cadastrar os serviços prestados.\n3.Mostrar os serviços prestados em determinado dia.\n"
                "4.Mostrar os serviços prestados dentro de um intervalo de valor.\n5.Mostrar um relatório geral (separado por dia), que exiba, inclusive, a descrição do tipo do serviço."
                "\n6.Finalizar.\nDigite a opção: ");
        scanf("%d",&x);
        
        switch(x){
            
            case 1:
                cadastrar_tipo(&tserv);
                break;
            case 2:
                cadastrar_servicos(&tserv,&mes,&j,&descod);
                break;
            case 3:
                procurar_dia(&tserv,&mes,&descod);
                break;
            case 4: 
                procurar_valor(&tserv,&mes,&descod);
                break;
            case 5:
                mostrar_tudo(&tserv,&mes,&descod);
                break;
            case 6:
                return(0);
                break;
            default:
                printf("\nOPÇÃO INVÁLIDA\n");
        }
        
    }    
    
    return (0);
}

