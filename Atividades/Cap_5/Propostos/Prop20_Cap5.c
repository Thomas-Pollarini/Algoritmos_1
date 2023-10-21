#include <stdio.h>
#include <stdlib.h>

int main() {

    
    int x;
    float n1,n2,n3,p1,p2,p3,media;
    
    
    printf("Menu de opções:\n1. Média aritmética\n2. Média ponderada\n3. Sair\nDigite a opção desejada: ");
    scanf("%d",&x);
    
    while(x!=3){
        
        switch(x){
            
            case 1:
                printf("Digite a primeira nota: ");
                scanf("%f",&n1);
                printf("Digite a segunda nota: ");
                scanf("%f",&n2);
                
                media=(n1+n2)/2.0;
                
                printf("\nMédia aritmética: %.2f\n\n",media);
              break;
              
            case 2:
                printf("Digite a primeira nota: ");
                scanf("%f",&n1);
                printf("Digite o peso da nota: ");
                scanf("%f",&p1);
                printf("Digite a segunda nota: ");
                scanf("%f",&n2);
                printf("Digite o peso da nota: ");
                scanf("%f",&p2);
                printf("Digite a terceira nota: ");
                scanf("%f",&n3);
                printf("Digite o peso da nota: ");
                scanf("%f",&p3);
                
                media=(n1*p1+n2*p2+n3*p3)/p1+p2+p3;
                
                printf("\nMédia ponderada: %.2f\n\n",media);
              break;
              
            default:
                printf("\nOpção digitada inválida.\n\n");
        }
        
        printf("Menu de opções:\n1. Média aritmética\n2. Média ponderada\n3. Sair\nDigite a opção desejada: ");
        scanf("%d",&x);
        
    }
    
    
    return (0);
}

