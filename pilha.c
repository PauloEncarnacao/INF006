#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE 10
//definição de tipos

struct pilha{
  int v[CAPACIDADE];
  int topo;
};


//funcoes principais
void ini(struct pilha*p){
  p->topo=-1; // indicar que a pilha está vazia
}




int main{

    int op;
    struct pilha p;
  while(1){
    menu();
    op= ler_op();

    switch(op){
      case 1:{
        break;
      }
        break;
      case 2:{
        break;
      }
        break;
      
      
      
      
      
      
    }
  }
}