#include "stdio.h"
#include "stdlib.h"

typedef struct no No;

 struct no {

  int num;
  struct no *prox;
};



No* Criar_no() {
  No*novo=(No*)malloc(sizeof(No));
   return novo;
}

No* inserir_no_inicio(No*Lista,int dado){
  No*novo_no=Criar_no();
  novo_no->num=dado;

    if(Lista = NULL){
      Lista= novo_no;
      novo_no->prox=NULL;
    }

    else{
      novo->prox=Lista;
      Lista->novo_no;
    }
    return Lista;
}

void imprimir_lista(No*Lista){
  No*aux=Lista;

  While(aux!=NULL){
    printf("%d",aux->num);
    aux=aux->prox;
  }
}

int main(){


  No*Lista=NULL;//lista vazia

Lista=inserir_no_inicio(Lista,10);
imprimir_lista(Lista);
}