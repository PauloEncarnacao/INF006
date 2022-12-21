  #include <stdio.h>
#include <stdlib.h>

int soma_vetor(int vet[],int tam);
int main(){

int vetor[5]={2,3,4,5,6};

  printf("a soma dos vetores =%d\n",soma_vetor(vetor,5));
  
  return 0;
}

int soma_vetor(int vet[],int tam){
   if(tam==0){
     return 0;
   }
  else {
    return vet[tam-1] + soma_vetor(vet,tam-1);
  }
}