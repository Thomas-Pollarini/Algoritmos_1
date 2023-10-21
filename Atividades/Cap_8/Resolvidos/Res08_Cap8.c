#include <stdio.h>
#include <stdlib.h>

int duracao(int hr,int min,int hr2,int min2){
    
    int hrf,minf,tempo;
    
    if(min2<min){
        hr2-=1;
        min2+=60;
        minf=min2-min;
    }else{
        minf=min2-min;
    }
    
    if(hr2<hr){
        hr2+=24;
        hrf=hr2-hr;
    }else{
        hrf=hr2-hr;
    }
    tempo=minf+(hrf*60);
    
    return tempo;
}

int main() {

    int hr,hr2,min,min2,res;
    
    printf("Digite a hora e os minutos de inicio:\n");
    scanf("%d",&hr);
    scanf("%d",&min);
    printf("Digite a hora e os minutos de término:\n");
    scanf("%d",&hr2);
    scanf("%d",&min2);
    res=duracao(hr,min,hr2,min2);
    printf("\nDuração da partida em minutos: %d\n",res);
    
    return (0);
}

