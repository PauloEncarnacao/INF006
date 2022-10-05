#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fatorial(int n);

int main(){
    
    int n;
    printf("Digite o numero que deseja obter o fatorial");
    scanf("%d",&n);
    
    int resultado;
    resultado=fatorial(n);
    printf("fatorial do numero = %d",resultado);
    
   
}

int fatorial(int n){
    
    if(n==0 || n==1){
        return 1;
    }
    else
        return n*fatorial(n-1);
}