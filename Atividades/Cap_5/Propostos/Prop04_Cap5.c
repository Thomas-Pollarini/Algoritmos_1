#include <stdio.h>
#include <stdlib.h>


int main() {

    int num;
    
    
    printf("Digie um número: ");
    scanf("%d",&num);
    
    for(int i=0;i<11;i++){
        
        printf("%d X %d = %d\n",num,i,num*i);
        
    }
       
    return (0);
}

