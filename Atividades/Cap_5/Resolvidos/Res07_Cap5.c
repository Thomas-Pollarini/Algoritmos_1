#include <stdio.h>
#include <stdlib.h>


int main() {

    int n1,n2,res;
    
    printf("Digite o primeiro termo: ");
    scanf("%d",&n1);
     printf("Digite o segundo termo: ");
    scanf("%d",&n2);
    
    res=n1+n2;
    
    printf("%d-%d-%d",n1,n2,res);
    
    for(int i = 0;i<5 ;i++){
        
        n1=n2;
        n2=res;
        res=n1+n2;
        printf("-%d",res);
    }
            
    return (0);
}

