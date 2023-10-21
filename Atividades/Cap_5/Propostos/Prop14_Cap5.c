#include <stdio.h>
#include <stdlib.h>


int main() {

    int idade,filme,cont1=0,imedia=0;
    float media=0,perc1=0;
    
    for(int i=0;i<15;i++){
        
       printf("Digite sua idade: ");
       scanf("%d",&idade);
       printf("Digite sua opinião sobre o filme: ");
       scanf("%d",&filme);
       
       if(filme==3){
           media++;
           imedia=imedia+idade;
       }
       if(filme==1){
           cont1++;
       }
       if(filme==2){
           perc1++;
       }
       
    }
    
    media=imedia/media;
    perc1=(perc1*100)/15;
    
    printf("Média das idades das pessoas que responderam ótimo: %.2f\nQuantidade de pessoas que responderam regular: %d\n"
            "Percentagem de pessoas que responderam bom, entre todos os espectadores analisados: %.2f%%\n",media,cont1,perc1);
    
    
    
    
    
    
    return (0);
}

