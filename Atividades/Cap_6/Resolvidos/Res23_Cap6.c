#include <stdio.h>
#include <stdlib.h>

#define tam 24

int main() {

    int i,x,num,cont1,j[tam],c[tam];
    char pos;
    
    for(i=0;i<tam;i++){
        j[i]=0;
        c[i]=0;
    }
    
    x=0;
    while(x!=3){
        
        printf("\n\nMenu:\n1-Vender passagem\n2-Mostrar mapa de ocupação do ônibus\n3-Encerrar\nDigite a opção desejada: ");
        scanf("%d",&x);
        
        switch(x){
            
            case 1:
                printf("Poltrona na janela ou no corredor(J/C): ");
                scanf(" %c",&pos);
                printf("Número da poltrona: ");
                scanf("%d",&num);
                
                for(i=0;i<tam;i++){
                    if(j[i]==0 || c[i]==0){
                        cont1=0;
                    }else{
                        cont1++;
                    }
                }
                
                if(cont1==0){
                    
                    if(pos==67){
                        if(c[num-1]==0){
                            c[num-1]=1;
                            printf("\nVENDA EFETIVADA");
                        }else{
                            printf("\nPOLTRONA OCUPADA");
                        }
                    }
                    if(pos==74){
                        if(j[num-1]==0){
                            j[num-1]=1;
                            printf("\nVENDA EFETIVADA");
                        }else{
                            printf("\nPOLTRONA OCUPADA");
                        }
                    }    
                }else{
                    printf("\nÔNIBUS LOTADO");
                }
                break;
                
            case 2:
                        printf("\nJANELA:            CORREDOR:\n");
                for(i=0;i<tam;i++){
                    if(j[i]==0){
                        printf("%d- Livre          ",i+1);
                    }else{
                        printf("%d- Ocupado        ",i+1);
                    }
                    
                    if(c[i]==0){
                        printf("%d- Livre\n",i+1);
                    }else{
                        printf("%d- Ocupado\n",i+1);
                    }
                }
                
                break;
            
            case 3:
                return(0);
                break;
            
            default:
                printf("\nOPÇÃO INVÁLIDA.");
                break;
        }
        
        
    }
    
    return (0);
}

