#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {

    int d1,m1,a1,d2,m2,a2;
    
    printf("Digite a primeira data(dia, mês, ano):\n");
      scanf("%d",&d1);
      scanf("%d",&m1);
      scanf("%d",&a1);
    printf("Digite a segunda data(dia, mês, ano):\n");
      scanf("%d",&d2);
      scanf("%d",&m2);
      scanf("%d",&a2);
      
     if(a1==a2){
         if(m1==m2){
             if(d1>d2){
                 printf("A data %d/%d/%d é cronologicamente maior",d1,m1,a1);
                 }
             else{
                 printf("A data %d/%d/%d é cronologicamente maior",d2,m2,a2);
             }
         }
         else{
             if(m1>m2){
                 printf("A data %d/%d/%d é cronologicamente maior",d1,m1,a1);
             }
             else{
                 printf("A data %d/%d/%d é cronologicamente maior",d2,m2,a2);
             }   
         }        
     }
     else{
         if(a1>a2){
             printf("A data %d/%d/%d é cronologicamente maior",d1,m1,a1);
         }
         else{
             printf("A data %d/%d/%d é cronologicamente maior",d2,m2,a2);
         }
     } 
     
    return (0);
}
