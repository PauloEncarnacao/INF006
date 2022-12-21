#include <stdio.h>
#include <stdlib.h>

typedef struct ponto {

  int x,y;
  struct ponto *proximo;
}t_ponto;


int main(int argc, char *argv[]) 

{
  t_ponto* ini_ponto;//inicio da lista
  t_ponto* proximo_ponto;//proximo item

  ini_ponto = (t_ponto*)malloc(sizeof(t_ponto));
    
  if(ini_ponto==NULL)
      exit(1);

  proximo_ponto= ini_ponto;

    while(1)
      {
        int x,y,resp;
        printf("Digite o X:");
        scanf("%d",&proximo_ponto->x);
        printf("Digite o valor do Y");
        scanf("%d",&proximo_ponto->y);
        printf("Deseja continuar? <1> SIM <OUTRO VALOR> NAO: ");
        scanf("%d",&resp);

        if(resp==1){
          proximo_ponto->proximo=(t_ponto*)malloc(sizeof(t_ponto));
          proximo_ponto= proximo_ponto->proximo;
        }
        else
          break;
      }

  proximo_ponto->proximo=NULL;
  proximo_ponto=ini_ponto;
    while(proximo_ponto != NULL){
     printf("X: %d, y : %d \n",proximo_ponto->x,proximo_ponto->y);
      proximo_ponto=proximo_ponto->proximo;
    }
  return 0;
}