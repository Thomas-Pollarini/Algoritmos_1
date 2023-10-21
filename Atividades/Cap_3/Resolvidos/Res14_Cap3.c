#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    int nas,ano,ia,im,is,id;
    
    printf("Digite o ano em que nasceu e o ano atual:\n");
    scanf("%d",&nas);
    scanf("%d",&ano);
    
    ia=ano-nas;
    im=ia*12;
    is=im*4.34524;
    id=is*7;
    
    printf("Idade em anos:%d\n"
            "Idade em meses:%d\n"
            "Idade em semanas:%d\n"
            "Idade em dias:%d\n",ia,im,is,id);
            
    return (EXIT_SUCCESS);
}

