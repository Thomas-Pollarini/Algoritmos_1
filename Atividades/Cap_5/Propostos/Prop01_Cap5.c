#include <stdio.h>
#include <stdlib.h>


int main() {

    float a,b,c,d;
    
    for(int i=0;i<5;i++){
        
        printf("Digite o valor A: ");
        scanf("%f",&a);
        printf("Digite o valor B: ");
        scanf("%f",&b);
        printf("Digite o valor C: ");
        scanf("%f",&c);
        printf("Digite o valor D: ");
        scanf("%f",&d);
        
        printf("Ordem lida: %.2f, %.2f, %.2f, %.2f\n",a,b,c,d);
        
        if(a<b && a<c && a<d){
            if(b<c && b<d){
                if(c<d){
                    printf("A ordem crescente dos números é:%.2f, %.2f, %.2f, %.2f\n",a,b,c,d);
                }else{
                    printf("A ordem crescente dos números é:%.2f, %.2f, %.2f, %.2f\n",a,b,d,c);
                }
            }else{
                if(c<b && c<d){
                    if(b<d){
                        printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",a,c,b,d);
                    }    
                    else{
                        printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",a,c,d,b);
                    }
                }else{
                    if(d<b && d<c){
                        if(c<b){
                            printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",a,d,c,b);
                        }
                        else{
                            printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",a,d,b,c);
                        }
                    }
                }    
            }            
        }else{
            if(b<a && b<c && b<d){
                if(a<c && a<d){
                    if(c<d){
                        printf("A ordem crescente dos números é:%.2f, %.2f, %.2f, %.2f\n",b,a,c,d);
                    }else{
                        printf("A ordem crescente dos números é:%.2f, %.2f, %.2f, %.2f\n",b,a,d,c);
                    }
                }else{
                    if(c<a && c<d){
                        if(a<d){
                            printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",b,c,a,d);
                        }    
                        else{
                            printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",b,c,d,a);
                        }
                    }else{
                        if(d<a && d<c){
                            if(c<a){
                                printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",b,d,c,a);
                            }
                            else{
                                printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",b,d,a,c);
                            }
                        }
                    }    
                }            
            }else{   
                if(c<a && c<b && c<d){
                    if(a<b && a<d){
                        if(b<d){
                            printf("A ordem crescente dos números é:%.2f, %.2f, %.2f, %.2f\n",c,a,b,d);
                        }else{
                            printf("A ordem crescente dos números é:%.2f, %.2f, %.2f, %.2f\n",c,a,d,b);
                        }
                    }else{
                        if(b<a && b<d){
                            if(a<d){
                                printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",c,b,a,d);
                            }    
                            else{
                                printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",c,b,d,a);
                            }
                        }else{
                            if(d<a && d<b){
                                if(b<a){
                                    printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",c,d,b,a);
                                }
                                else{
                                    printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",c,d,a,b);
                                }
                            }
                        }    
                    }
                }else{
                    if(d<a && d<b && d<c){
                        if(a<b && a<c){
                            if(b<c){
                                printf("A ordem crescente dos números é:%.2f, %.2f, %.2f, %.2f\n",d,a,b,c);
                            }else{
                                printf("A ordem crescente dos números é:%.2f, %.2f, %.2f, %.2f\n",d,a,c,b);
                            }
                        }else{
                            if(b<a && b<c){
                                if(a<c){
                                    printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",d,b,a,c);
                                }    
                                else{
                                    printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",d,b,c,a);
                                }
                            }else{
                                if(c<a && c<b){
                                    if(b<a){
                                        printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",d,c,b,a);
                                    }
                                    else{
                                        printf("A ordem crescente dos números é: %.2f, %.2f, %.2f, %.2f\n",d,c,a,b);
                                    }
                                }
                            }    
                        }
                    }
                }
            }    
        }
         
        
        
        if(a>b && a>c && a>d){
            if(b>c && b>d){
                if(c>d){
                    printf("A ordem decrescente dos números é:%.2f, %.2f, %.2f, %.2f\n",a,b,c,d);
                }else{
                    printf("A ordem decrescente dos números é:%.2f, %.2f, %.2f, %.2f\n",a,b,d,c);
                }
            }else{
                if(c>b && c>d){
                    if(b>d){
                        printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",a,c,b,d);
                    }    
                    else{
                        printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",a,c,d,b);
                    }
                }else{
                    if(d>b && d>c){
                        if(c>b){
                            printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",a,d,c,b);
                        }
                        else{
                            printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",a,d,b,c);
                        }
                    }
                }    
            }            
        }else{
            if(b>a && b>c && b>d){
                if(a>c && a>d){
                    if(c>d){
                        printf("A ordem decrescente dos números é:%.2f, %.2f, %.2f, %.2f\n",b,a,c,d);
                    }else{
                        printf("A ordem decrescente dos números é:%.2f, %.2f, %.2f, %.2f\n",b,a,d,c);
                    }
                }else{
                    if(c>a && c>d){
                        if(a>d){
                            printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",b,c,a,d);
                        }    
                        else{
                            printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",b,c,d,a);
                        }
                    }else{
                        if(d>a && d>c){
                            if(c>a){
                                printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",b,d,c,a);
                            }
                            else{
                                printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",b,d,a,c);
                            }
                        }
                    }    
                }            
            }else{   
                if(c>a && c>b && c>d){
                    if(a>b && a>d){
                        if(b>d){
                            printf("A ordem decrescente dos números é:%.2f, %.2f, %.2f, %.2f\n",c,a,b,d);
                        }else{
                            printf("A ordem decrescente dos números é:%.2f, %.2f, %.2f, %.2f\n",c,a,d,b);
                        }
                    }else{
                        if(b>a && b>d){
                            if(a>d){
                                printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",c,b,a,d);
                            }    
                            else{
                                printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",c,b,d,a);
                            }
                        }else{
                            if(d>a && d>b){
                                if(b>a){
                                    printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",c,d,b,a);
                                }
                                else{
                                    printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",c,d,a,b);
                                }
                            }
                        }    
                    }
                }else{
                    if(d>a && d>b && d>c){
                        if(a>b && a>c){
                            if(b>c){
                                printf("A ordem decrescente dos números é:%.2f, %.2f, %.2f, %.2f\n",d,a,b,c);
                            }else{
                                printf("A ordem decrescente dos números é:%.2f, %.2f, %.2f, %.2f\n",d,a,c,b);
                            }
                        }else{
                            if(b>a && b>c){
                                if(a>c){
                                    printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",d,b,a,c);
                                }    
                                else{
                                    printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",d,b,c,a);
                                }
                            }else{
                                if(c>a && c>b){
                                    if(b>a){
                                        printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",d,c,b,a);
                                    }
                                    else{
                                        printf("A ordem decrescente dos números é: %.2f, %.2f, %.2f, %.2f\n",d,c,a,b);
                                    }
                                }
                            }    
                        }
                    }
                }
            }    
        }
     
    }
    
    
    return (0);
}

