/*

3) Que  entre com dados num vetor VET do tipo inteiro com 20 oisiçoes, onde podem existir varios elementos repetidos. Gere um vetor VET1 que tambem será ordenado e terá somente os elementos do vetor VET que não sao repetidos.

*/

#
#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main(){
	
	int vet[TAM];
	int aux;
	
	for(int i=1; i<TAM; i++){
		
		printf("INSIRA O VALOR DO VETOR[%d] = ",i);		
		scanf("%d",&vet[i]);
	}
			
		for(int i=1; i<TAM; i++){
		  for(int j=i ;j<TAM;j++){
		
			if(vet[i]<vet[j]){
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
        
			}
		}
	}
  for(int i=1; i<TAM; i++){
			printf("vetor[%d] = %d\n",i,vet[i]);
			
			}
	
}