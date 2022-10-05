/* 6)  Que leia e armazene os elemntos de uma matriz inteira (10,10) e imprima. depois troque os dados da segunda linha pela oitava. da quarta pela decima, a diagonal principal pela diagonal segundaria. */

#include <stdio.h>
#define size 10
#define TAM 10
void main() {
  
   int matriz[size][size];
int l,c;
for(int i=0; i<size; i++){
	for(int j=0; j<size; j++)
		scanf("%d",&matriz[i][j]);
	printf("\n");
	
}
  
  int vetAux[TAM];
  int j = 0;
  
  while(j<TAM) {
    vetAux[j] = matriz[1][j]; 
    matriz[1][j] = matriz[7][j];
    matriz[7][j] = vetAux[j];
  
  
    vetAux[j] = matriz[3][j]; 
    matriz[3][j] = matriz[9][j];
    matriz[9][j] = vetAux[j];
  
    j++;  
  }
  
  j = 9;
  
  for(int i = 0; i<TAM; i++) {
    vetAux[i] = matriz[i][i];
    matriz[i][i] = matriz[i][j] ;
    matriz[i][j] = vetAux[i];
    j--;
  }

  
  for(int i = 0; i<TAM; i ++) {
    for(int j =0; j<TAM; j++) {
      printf("%i ",matriz[i][j]);
    }
    printf("\n");
      
  }

  
}
  