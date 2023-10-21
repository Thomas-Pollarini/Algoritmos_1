#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    int ang1,ang2,ang3;
    
    printf("Digite a medida dos dois ângulos:\n");
    scanf("%d",&ang1);
    scanf("%d",&ang2);
    
    if(ang1+ang2<180){
        
        ang3=(180-(ang1+ang2));
        
        printf("Medida do terceiro ângulo:%d\n",ang3);}
    else{
        printf("É impossível a soma de dois ângulos do triângulo ser igual ou maior que 180 graus.\n"
                "Por favor insira ângulos validos.\n");}
    
    return (EXIT_SUCCESS);
}

