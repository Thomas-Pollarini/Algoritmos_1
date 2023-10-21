#include <stdio.h>
#include <stdlib.h>

#define tam 12

int main() {
    
    int i,x,n,num[tam],origem[tam],lugar[tam],dest[tam];
    
    for(i=0;i<tam;i++){
        
        printf("Declare o número do voo: ");
        scanf("%d",&num[i]);
        printf("Declare a origem do voo: ");
        scanf("%d",&origem[i]);
        printf("Declare o destino do voo: ");
        scanf("%d",&dest[i]);
        printf("Declare o número de lugares vagos no voo: ");
        scanf("%d",&lugar[i]);
        
    }
    x=0;
    while(x!=3){
        printf("\nMenu:\n1-Consultar\n2-Efetuar reserva\n3-Sair\nDigite uma opção: ");
        scanf("%d",&x);
    
        switch(x){
            
            case 1:
                printf("\n\nConsultar:\n1-Por número do voo\n2-Por origem\n3-Por destino\nDigite uma opção: ");
                scanf("%d",&x);
                
                switch(x){
                    case 1:
                        printf("\nDigite o número do voo: ");
                        scanf("%d",&n);
                        i=0;
                        while(i<tam && num[i]!=n){
                            i++;
                        }
                        if(i>=tam){
                            printf("\nVoo inexistente.\n");
                        }else{
                            printf("\n\nNúmero do voo: %d\nLocal de origem: %d\nLocal de destino: %d\nLugares disponíveis: %d\n",
                                    num[i],origem[i],dest[i],lugar[i]);
                        }
                        x=0;
                        break;
                     
                    case 2: 
                        printf("\nDigite a oridem do voo: ");
                        scanf("%d",&n);
                        i=0;
                        while(i<tam && origem[i]!=n){
                            i++;
                        }
                        if(i>=tam){
                            printf("\nVoo inexistente.\n");
                            x=0;
                            break;
                        }else{
                            printf("\n\nNúmero do voo: %d\nLocal de origem: %d\nLocal de destino: %d\nLugares disponíveis: %d\n",
                                    num[i],origem[i],dest[i],lugar[i]);
                        }
                        x=0;
                        break;
                        
                    case 3: 
                        printf("\nDigite o destino do voo: ");
                        scanf("%d",&n);
                        i=0;
                        while(i<tam && dest[i]!=n){
                            i++;
                        }
                        if(i>=tam){
                            printf("\nVoo inexistente.\n");
                            x=0;
                            break;
                        }else{
                            printf("\n\nNúmero do voo: %d\nLocal de origem: %d\nLocal de destino: %d\nLugares disponíveis: %d\n",
                                    num[i],origem[i],dest[i],lugar[i]);
                        }
                        x=0;
                        break;    
                        
                }
                break;
            
            case 2:
                
                printf("Digite o número do voo em que deseja realizar a reserva: ");
                scanf("%d",&n);
                i=0;
                while(i<tam && num[i]!= n){
                    i++;
                }
                if(i>=tam){
                    printf("\nVoo inexistente.\n");
                }else{
                    if(lugar[i]>0){
                        printf("\nReserva confimada.\n");
                        lugar[i]--;
                    }else{
                        printf("\nVoo lotado.\n");
                        
                    }
                }
                break;
                
            case 3:
                return(0);
                break;
                
        }
    }
    
    
    
    

    return (0);
}

