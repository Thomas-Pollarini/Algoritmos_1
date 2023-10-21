#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main() {
    
    int i,j,k,x[tam],y[tam],u[tam*2],d[tam],s[tam],p[tam],in[tam],cont_u,cont_d,cont_i,cont1;
    
    
    for(i=0;i<tam;i++){
        
        printf("Digite os valores da posição %d de x e y:\n",i);
        scanf("%d",&x[i]);
        scanf("%d",&y[i]);
        
    }
    cont_u=1;
    
    for(i=0;i<tam;i++){
        if(i==0){
            u[i]=x[i];
        }else{
            j=0;
            cont1=0;                               //processo para atribuir os valores
            while(j<cont_u && x[i]!= u[j]){        //de x que não são repetidos na união
                j++;
                if(j>=cont_u){
                    u[cont_u]=x[i];
                    cont1++;
                }
            }
            if(cont1==1){
                cont_u++;
            }
        }
    }    
    for(i=0;i<tam;i++){
        j=0;
        cont1=0;                               //processo para atribuir os valores
        while(j<cont_u && y[i]!= u[j]){        //de y que não são repetidos na união
            j++;
            if(j>=cont_u){
                u[cont_u]=y[i];
                cont1++;
            }
        }
        if(cont1==1){
            cont_u++;
        }
    }
        
    
    cont_d=0;
    for(i=0;i<tam;i++){
        j=0;
        while(j<10 && x[i]!=y[j]){
            j++;
            if(j>=10){                      //processo para retirar os valores de
                if(cont_d==0){              // x que repetem em y
                    d[cont_d]=x[i];
                    cont_d++;
                }else{
                    k=0;
                    cont1=0;
                    while(k<cont_d && x[i]!= d[k]){
                        k++;
                        if(k>=cont_d){
                            d[cont_d]=x[i];
                            cont1++;
                        }
                    }
                    if(cont1==1){
                        cont_d++;
                    }
                }
            }
        }
    }
  
    for(i=0;i<tam;i++){     //processo para somar valores dos vetores
        s[i]=x[i]+y[i];
    }
    
    for(i=0;i<tam;i++){     //processo para multiplicar valores dos vetores
        p[i]=x[i]*y[i];
    }
    
    
    cont_i=0;
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(x[i]==y[j]){                 //processo para encontrar valores 
                if(cont_i==0){              //repetidos nos vetores x e y
                    in[cont_i]=x[i];
                    cont_i++;
                }else{
                    k=0;
                    cont1=0;
                    while(k<cont_i && x[i]!=in[k]){
                        k++;
                        if(k>=cont_i){
                            in[cont_i]=x[i];
                            cont1++;
                        }
                    }
                    if(cont1==1){
                        cont_i++;
                    }
                }
            }
        }
    }
    
    
    
    
    printf("\nUnião dos vetores: ");
    for(i=0;i<cont_u;i++){
        printf(" %d ",u[i]);
    }
    printf("\nDiferença dos vetores: ");
    for(i=0;i<cont_d;i++){
        printf(" %d ",d[i]);
    }
    printf("\nSoma dos vetores: ");
    for(i=0;i<tam;i++){
        printf(" %d ",s[i]);
    }
    printf("\nProduto dos vetores: ");
    for(i=0;i<tam;i++){
        printf(" %d ",p[i]);
    }
    printf("\nIntersecção dos vetores: ");
    for(i=0;i<cont_i;i++){
        printf(" %d ",in[i]);
    }
    
    return (EXIT_SUCCESS);
}

