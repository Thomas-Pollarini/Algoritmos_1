#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {

    int h1,h2,hf,m1,m2,mf;
    
    printf("Digite as horas e os minutos em que o jogo começou:\n");
    scanf("%d",&h1);
    scanf("%d",&m1);
    printf("Digite as horas e os minutos em que o jogo terminou:\n");
    scanf("%d",&h2);
    scanf("%d",&m2);
    
    if(m1>m2){
        m2=m2+60;
        h2=h2-1;        
    }
    if(h1>h2){
        h2=h2+24;
    }
    
    mf=m2-m1;
    hf=h2-h1;
    
    printf("O jogo durou %d:%d",hf,mf);
    
    return (0);
}

