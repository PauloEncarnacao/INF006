#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fib(int n);

int main(){

  int x;
  printf("digite o numero da sequencia de fibonacci que deseja ober o valor: ");
  scanf("%d",&x);

printf("o elemento %d eh igual a = %d",x,fib(x));
    return 0;
}


int fib(int n){
 if(n==1){
     return 0;
 }   
 else{
     if(n==2)
        return 1;
    else
    return fib(n -1)+fib(n - 2);
 }
 
    
}