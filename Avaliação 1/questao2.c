#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    
    int b1=rand()%25+1,b2=rand()%25+1,b3=rand()%25+1,b4=rand()%25+1,b5=rand()%25+1,pos;
    
    printf("Digite um número de 1 a 25 para abrir o quadrinho a ele relacionado:");
    scanf("%d",&pos);
    
    //1
    //algoritmo para verificar quadrinhos abertos
    if(pos == b1 || pos == b2 || pos == b3 || pos == b4 || pos == b5){
        printf("Você atingiu uma mina, GAME OVER.\nPosição das minas eram: %d, %d, %d, %d, %d\n",b1,b2,b3,b4,b5);
        return(0);
    }else{
        printf("Você abriu um quadrinho sem mina.\nDigite outro número para abrir mais um quadrinho:");
    }
    
    //2
    scanf("%d",&pos);
    if(pos == b1 || pos == b2 || pos == b3 || pos == b4 || pos == b5){
        printf("Você atingiu uma mina, GAME OVER.\nPosição das minas eram: %d, %d, %d, %d, %d\n",b1,b2,b3,b4,b5);
        return(0);
    }else{
        printf("Você abriu um quadrinho sem mina.\nDigite outro número para abrir mais um quadrinho:");
    }
    
    //3
    scanf("%d",&pos);
    if(pos == b1 || pos == b2 || pos == b3 || pos == b4 || pos == b5){
        printf("Você atingiu uma mina, GAME OVER.\nPosição das minas eram: %d, %d, %d, %d, %d\n",b1,b2,b3,b4,b5);
        return(0);
    }else{
        printf("Você abriu um quadrinho sem mina.\nDigite outro número para abrir mais um quadrinho:");
    }
    
    //4
    scanf("%d",&pos);
    if(pos == b1 || pos == b2 || pos == b3 || pos == b4 || pos == b5){
        printf("Você atingiu uma mina, GAME OVER.\nPosição das minas eram: %d, %d, %d, %d, %d\n",b1,b2,b3,b4,b5);
        return(0);
    }else{
        printf("Você abriu um quadrinho sem mina.\nDigite outro número para abrir mais um quadrinho:");
    }
    
    //5
    scanf("%d",&pos);
    if(pos == b1 || pos == b2 || pos == b3 || pos == b4 || pos == b5){
        printf("Você atingiu uma mina, GAME OVER.\nPosição das minas eram: %d, %d, %d, %d, %d\n",b1,b2,b3,b4,b5);
        return(0);
    }else{
        printf("Você abriu um quadrinho sem mina.\nDigite outro número para abrir mais um quadrinho:");
    }
    
    //6
    scanf("%d",&pos);
    if(pos == b1 || pos == b2 || pos == b3 || pos == b4 || pos == b5){
        printf("Você atingiu uma mina, GAME OVER.\nPosição das minas eram: %d, %d, %d, %d, %d\n",b1,b2,b3,b4,b5);
        return(0);
    }else{
        printf("Você abriu um quadrinho sem mina.\nDigite outro número para abrir mais um quadrinho:");
    }
    
    //7
    scanf("%d",&pos);
    if(pos == b1 || pos == b2 || pos == b3 || pos == b4 || pos == b5){
        printf("Você atingiu uma mina, GAME OVER.\nPosição das minas eram: %d, %d, %d, %d, %d\n",b1,b2,b3,b4,b5);
        return(0);
    }else{
        printf("Você abriu um quadrinho sem mina.\nDigite outro número para abrir mais um quadrinho:");
    }
    
    //8
    scanf("%d",&pos);
    if(pos == b1 || pos == b2 || pos == b3 || pos == b4 || pos == b5){
        printf("Você atingiu uma mina, GAME OVER.\n");
        return(0);
    }else{
        printf("Você abriu um quadrinho sem mina.\n");
    }
    
    printf("PARÁBENS!!!\nVocê ganhou.Nenhum dos 8 quadrinhos abertos tinham minas. :D\n\n"
            "Posição das minas eram: %d, %d, %d, %d, %d\n",b1,b2,b3,b4,b5);
    
    return (0);
}

