#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int x;
    
    printf("Digite a senha: ");
    scanf("%d",&x);
    
    switch(x){
        case 4531:
            printf("SENHA VÁLIDA.\nACESSO PERMITIDO.\n");
          break;
          
        default:
            printf("SENHA INVÁLIDA.\nACESSO NEGADO.\n");
    }
    
    return (0);
}

