
/*
4) Que armazene 10 numeros em um vetor. Na entrada de dados, o numero ja deve ser armazenado na sua posição definitiva em ordem decrescente. 
imprimir o vetor logo apos a entrada de dados;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vet[10];
	int aux;
	
	for(int i=1; i<11; i++){
		
		printf("INSIRA O VALOR DO VETOR[%d] = ",i);		
		scanf("%d",&vet[i]);
	}
	
	for(int i=1; i<11; i++){
		for(int j=i ;j<11;j++){
		
			if(vet[i]<vet[j]){
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;
				
			}
		}
	}
	
		for(int i=1; i<11; i++){
			printf("vetor[%d] = %d\n",i,vet[i]);
			
			}
	
	return 0;
}