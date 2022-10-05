#include <stdio.h>
#include <stdlib.h>


int main(){

  int num;
  printf("informe ate que numero deseja somar");
  scanf("%d",&num);

  printf("RESULTADO = %d ",soma_inteiros(num));
  
  return 0;
}

int soma_inteiros(int num){
    if(num==0){
      return 0;
    }
      else if (num==1){
        return 1;
      }
        else{

          return num + soma_inteiros(num-1);
        }
  
  
}