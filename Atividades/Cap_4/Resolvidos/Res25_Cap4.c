#include <stdio.h>
#include <stdlib.h>



int main() {
    
    int ang,volta;
    
    printf("Digite o tamanho do ângulo: ");
    scanf("%d",&ang);
    
    if(ang>360 || ang < -360){
        
        volta=ang/360;
        ang=ang % 360;
    }
    else{
        volta=0;
    }
    
    if(ang==0 || ang==90 || ang==180 || ang==270 || ang==360 || ang== -90 || ang== -180 || ang== -270 || ang== -360){
        
       printf("O ângulo está em cima de um dos eixos"); 
    }
    
    if((ang>0 && ang< 90)||(ang<-270 && ang>-360)){
        printf("O ângulo está no primeiro Quadrante.\n");
    }
    if((ang>90 && ang< 180)||(ang<-180 && ang>-270)){
        printf("O ângulo está no segundo Quadrante.\n");
    }
    if((ang>180 && ang< 270)||(ang<-90 && ang>-180)){
        printf("O ângulo está no terceiro Quadrante.\n");
    }
    if((ang>270 && ang< 360)||(ang<0 && ang>-90)){
        printf("O ângulo está no quarto Quadrante.\n");
    }
    
    printf("%d volta(s) no sentido ",volta);
    if(ang<0){
        printf("horário.");
    }
    else{
        printf("anti-horário.");
    }
    
    
    return (0);
}

