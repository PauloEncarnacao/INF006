/*
Questão 2 Considere uma aplicação para armazenar os seguintes dados de uma pessoa em uma agenda de endereços:
nome, endereço e telefone. Especifique um TAD para armazenar os dados das pessoas e as operações
necessárias para inserir, consultar e excluir os dados das pessoas.
  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 4

typedef struct{
  
  char nome[50];
  char endereco[50];
  int telefone;

}pessoa;


int main(){

  
  for(i=0; i<size; i++){

    printf("digite o nome ");
    fgets(pessoa.nome[i],50,stdin);
    //
    printf("digite o endereco ");
    fgets(pessoa.endereco[i],50,stdin);
    //
    printf("digite o telefone");
    scanf("%d",&pessoa.telefone);
  }
  
}