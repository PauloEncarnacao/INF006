#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int potencia(int x, int n);
int main(){
    
    int n,x;
    
    printf("digite o valor para X: ");
    scanf("%d",&x);
    
    printf("digite o valor  para N: ");
    scanf("%d",&n);
    
    printf("o valor de X elevado a N eh= %d",potencia(x,n));
    
    return 0;
}

int potencia(int x, int n){
    
    if(n==0)
        return 1;
    
    else
      return x*potencia(x, n-1);
}

    
