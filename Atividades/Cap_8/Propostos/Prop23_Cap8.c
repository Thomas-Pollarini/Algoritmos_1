#include <stdio.h>
#include <stdlib.h>


int verificar(float l,float l2,float l3){
    
    int ver=0;
    
    if(l<=l2+l3 && l2<=l+l3 && l3<=l+l2){
        ver++;
    }
    
    return ver;
}

int tipo_tri(float l,float l2,float l3){
    
    int tipo;
    
    if(l==l2 && l2==l3){
        tipo=1;
    }else{
        if(l==l2 || l==l3 || l2==l3){
            tipo=2;
        }else{
            tipo=3;
        }
    }
    
    return tipo;
}

int main() {

    int ver,tipo;
    float l,l2,l3;
    
    do{
    printf("Digite o valor do primeiro lado: ");
    scanf("%f",&l);
    }while(l<=0);
    do{
    printf("Digite o valor do segundo lado: ");
    scanf("%f",&l2);
    }while(l2<=0);
    do{
    printf("Digite o valor do terceiro lado: ");
    scanf("%f",&l3);
    }while(l3<=0);
    
    ver=verificar(l,l2,l3);
    
    
    if(ver==1){
        printf("\nOS LADOS FORMAM UM TRIÂNGULO ");
        tipo=tipo_tri(l,l2,l3);
        switch(tipo){
            case 1:
                printf("EQUILÁTERO.\n");
                break;
            case 2:
                printf("ISÓSCELES.\n");
                break;
            case 3:
                printf("ESCALENO.\n");
                break;    
        }
    }else{
        printf("\nOS LADOS NÃO FORMAM UM TRIÂNGULO.\n");
    }
    
    return (0);
}

