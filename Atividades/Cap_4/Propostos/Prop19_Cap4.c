#include <stdio.h>
#include <stdlib.h>

int main() {

    float alt,peso;
    char sexo;
    
    printf("Digite seu gênero(M/F): ");
    scanf("%c",&sexo);
    printf("Digite sua altura: ");
    scanf("%f",&alt);
    
    switch(sexo){
        case 'M':
            peso=(72.7 * alt)-58;
            printf("Peso ideal: %.2f\n",peso);
          break;
        
        case 'F':
            peso=(62.1 * alt)-44.7;
            printf("Peso ideal: %.2f\n",peso);
          break;
          
        default:
            printf("ERRO: gênero não reconhecido.");
          break;  
        
    }
    
    
    return (0);
}