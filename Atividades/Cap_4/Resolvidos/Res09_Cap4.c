#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/* printf("Digite o número do dia, do mês e do ano:\n");
      scanf("%d",&dia);
      scanf("%d",&mes);
      scanf("%d",&ano);
    printf("Digite as horas e os minutos:\n");
      scanf("%d",&hr);
      scanf("%d",&min);*/
 
int main() {
    time_t t;
    struct tm *data_hora;
    int dia,mes,ano,hr,min;
    
    t = time(NULL);
    data_hora = localtime(&t);
    dia = data_hora -> tm_mday;
    mes = data_hora -> tm_mon + 1;
    ano = data_hora -> tm_year + 1900;
    hr = data_hora -> tm_hour;
    min = data_hora -> tm_min;
    
    
    printf("%d/%d/%d\n",dia,mes,ano); 
    
    switch(mes){
            case 1:
                printf("janeiro\n");
              break;  
            case 2:
                printf("fevereiro\n");
              break;
            case 3:
                printf("março\n");
              break;  
            case 4:
                printf("abril\n");
              break;  
            case 5:
                printf("maio\n");
              break;  
            case 6:
                printf("junho\n");
              break;  
            case 7:
                printf("julho\n");
              break;  
            case 8:
                printf("agosto\n");
              break;  
            case 9:
                printf("setembro\n");
              break;  
            case 10:
                printf("outubro\n");
              break;  
            case 11:
                printf("novembro\n");
              break;  
            case 12:
                printf("dezembro\n");
              break;  
    }
    printf("%d:%d\n",hr,min);          
             
              
    return (0);
}

