#include <stdio.h>
#include <stdlib.h>

float volume_esfera(float r){
    
    float v;
    
    v=(4.0/3.0)*(r*r*r);
    
    return v;
}

int main() {
    
  
    float v,r;
    
    printf("Digite o valor do raio: ");
    scanf("%f",&r);
    
    v=volume_esfera(r);
    
    printf("\nVolume= %.3f\n",v);
    
    return (0);
}

