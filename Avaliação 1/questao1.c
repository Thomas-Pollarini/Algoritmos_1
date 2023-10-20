#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    srand(time(NULL));
    
    int c1bot=rand()%13+1,c2bot=rand()%13+1,c1=rand()%13+1,c2=rand()%13+1,c3=rand()%13+1,
        c4=rand()%13+1,c5=rand()%13+1,vlrbot,vlrp,x,dif1,dif2;
    
    
    vlrbot=c1bot+c2bot;
    dif1=26-vlrbot;
    
    //algoritmo para mostrar carta sorteada
    if(c1==1){
        printf("Primeira carta sorteada: A");
    }else{
        if(c1==11){
            printf("Primeira carta sorteada: J");
        }else{
            if(c1==12){
                printf("Primeira carta sorteada: Q");
            }else{
                if(c1==13){
                    printf("Primeira carta sorteada: K");
                }else{
                    printf("Primeira carta sorteada: %d",c1);
                }
            }
        }
    }
    
    
    printf("\n\n1-Sortear outra carta.\n2-Parar.\nDigite a opção desejada: ");
    scanf("%d",&x);
    
    switch(x){
        
            case 1:
                //algoritmo para mostrar carta sorteada
                if(c2==1){
                    printf("\nSegunda carta sorteada: A");
                }else{
                    if(c2==11){
                         printf("\nSegunda carta sorteada: J");
                    }else{
                        if(c2==12){
                            printf("\nSegunda carta sorteada: Q");
                        }else{
                            if(c2==13){
                                printf("\nSegunda carta sorteada: K");
                            }else{
                                printf("\nSegunda carta sorteada: %d",c2);
                            }
                        }
                    }
                }
                vlrp=c1+c2;
                
              break;
            
            case 2:
                dif2=26-c1;
                //Algoritmo para determinar o vencedor.
                if(dif1 < dif2){
                    printf("\nVocê perdeu. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,c1);
                }else{
                    if(dif2 < dif1){
                        printf("\nVocê Ganhou. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,c1);
                    }else{
                        if(dif1 == dif2){
                            printf("\nO jogo empatou. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,c1);
                        }
                    }
                }
                return(0);
              break;
            
            default:
                printf("ERRO: opção digitada invalida.\n");
                return(0);
              break;  
    }
    //repetindo o processo para as 5 cartas
    printf("\nValor atual de suas cartas: %d",vlrp);
    printf("\n\n1-Sortear outra carta.\n2-Parar.\nDigite a opção desejada: ");
    scanf("%d",&x);
    
    switch(x){
        
            case 1:
                //algoritmo para mostrar carta sorteada
                if(c3==1){
                    printf("\nTerceira carta sorteada: A");
                }else{
                    if(c3==11){
                         printf("\nTerceira carta sorteada: J");
                    }else{
                        if(c3==12){
                            printf("\nTerceira carta sorteada: Q");
                        }else{
                            if(c3==13){
                                printf("\nTerceira carta sorteada: K");
                            }else{
                                printf("\nTerceira carta sorteada: %d",c3);
                            }
                        }
                    }
                }
                //algoritmo para parar o jogo caso o valor das cartas sejam maior que 26
                vlrp=vlrp+c3;
                if(vlrp>26){
                    printf("\nVocê perdeu. Valor das suas cartas foram maior que 26."
                            "\nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                    return(0);
                }
                
              break;
            
            case 2:
                dif2=26-vlrp;
                //Algoritmo para determinar o vencedor.
                if(dif1 < dif2){
                    printf("\nVocê perdeu. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                }else{
                    if(dif2 < dif1){
                        printf("\nVocê Ganhou. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                    }else{
                        if(dif1 == dif2){
                            printf("\nO jogo empatou. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                        }
                    }
                }
                return(0);
              break;
            
            default:
                printf("ERRO: opção digitada invalida.\n");
                return(0);
              break;  
    }
    
    printf("\nValor atual de suas cartas: %d",vlrp);
    printf("\n\n1-Sortear outra carta.\n2-Parar.\nDigite a opção desejada: ");
    scanf("%d",&x);
    
    switch(x){
        
            case 1:
                //algoritmo para mostrar carta sorteada
                if(c4==1){
                    printf("\nQuarta carta sorteada: A");
                }else{
                    if(c4==11){
                         printf("\nQuarta carta sorteada: J");
                    }else{
                        if(c4==12){
                            printf("\nQuarta carta sorteada: Q");
                        }else{
                            if(c4==13){
                                printf("\nQuarta carta sorteada: K");
                            }else{
                                printf("\nQuarta carta sorteada: %d",c4);
                            }
                        }
                    }
                }
                //algoritmo para parar o jogo caso o valor das cartas sejam maior que 26
                vlrp=vlrp+c4;
                if(vlrp>26){
                    printf("\nVocê perdeu. Valor das suas cartas foram maior que 26."
                            "\nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                    return(0);
                }
                
              break;
            
            case 2:
                dif2=26-vlrp;
                //Algoritmo para determinar o vencedor.
                if(dif1 < dif2){
                    printf("\nVocê perdeu. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                }else{
                    if(dif2 < dif1){
                        printf("\nVocê Ganhou. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                    }else{
                        if(dif1 == dif2){
                            printf("\nO jogo empatou. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                        }
                    }
                }
                return(0);
              break;
            
            default:
                printf("ERRO: opção digitada invalida.\n");
                return(0);
              break;  
    }
    
    printf("\nValor atual de suas cartas: %d",vlrp);
    printf("\n\n1-Sortear outra carta.\n2-Parar.\nDigite a opção desejada: ");
    scanf("%d",&x);
    
    switch(x){
        
            case 1:
                //algoritmo para mostrar carta sorteada
                if(c5==1){
                    printf("\nQuinta carta sorteada: A");
                }else{
                    if(c5==11){
                         printf("\nQuinta carta sorteada: J");
                    }else{
                        if(c5==12){
                            printf("\nQuinta carta sorteada: Q");
                        }else{
                            if(c5==13){
                                printf("\nQuinta carta sorteada: K");
                            }else{
                                printf("\nQuinta carta sorteada: %d",c5);
                            }
                        }
                    }
                }
                //algoritmo para parar o jogo caso o valor das cartas sejam maior que 26
                vlrp=vlrp+c5;
                if(vlrp>26){
                    printf("\nVocê perdeu. Valor das suas cartas foram maior que 26."
                            "\nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                    return(0);
                }
                
              break;
            
            case 2:
                dif2=26-vlrp;
                //Algoritmo para determinar o vencedor.
                if(dif1 < dif2){
                    printf("\nVocê perdeu. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                }else{
                    if(dif2 < dif1){
                        printf("\nVocê Ganhou. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                    }else{
                        if(dif1 == dif2){
                            printf("\nO jogo empatou. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                        }
                    }
                }
                return(0);
              break;
            
            default:
                printf("ERRO: opção digitada invalida.\n");
                return(0);
              break;  
    }
    
    dif2=26-vlrp;
                //Algoritmo para determinar o vencedor.
                if(dif1 < dif2){
                    printf("Você perdeu. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                }else{
                    if(dif2 < dif1){
                        printf("Você Ganhou. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                    }else{
                        if(dif1 == dif2){
                            printf("O jogo empatou. \nValor das cartas do computador: %d\nvalor das suas cartas: %d\n",vlrbot,vlrp);
                        }
                    }
                }
    
    
    return(0);
}    