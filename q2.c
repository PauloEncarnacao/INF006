/*

2) Que dado dois vetores de 10 posições, efetue operações basicas aritmeticas, 
indicadas por um terceiro vetor cujos dados tambem são fornecidos 
pelo usuario, gerando e imprimindo um quarto vetor.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int vet1[10],vet2[10];
	int vet3[10];
	char op[10][1];
		
	
	for(int i=0; i<10; i++){
		
		for(int j=0; j<10; j++){
		
		printf("\ndigite o valor 1: ");
		scanf("%d",&vet1[i]);
		printf("digite o valor 2: ");
		scanf("%d",&vet2[i]);
		
		printf("digite a operacao: ");
		scanf("%s",&op[i][j]);
		
		if(op[i][j]=='+'){
			vet3[i]=(vet1[i]+vet2[i]);
			printf("\n resultado: %d\n",vet3[i]);
		}
		
		else if(op[i][j]=='-'){
			vet3[i]=(vet1[i]-vet2[i]);
			printf("\n resultado: %d\n",vet3[i]);
		}
		
		else if(op[i][j]=='*'){
			vet3[i]=(vet1[i]*vet2[i]);
			printf("\n resultado: %d\n",vet3[i]);
		}
		
		else if(op[i][j]=='/'){
			vet3[i]=(vet1[i]/vet2[i]);
			printf("\n resultado: %d\n",vet3[i]);
		}
		
		else if(op[i][j]=='%'){
			vet3[i]=(vet1[i]%vet2[i]);
			printf("\n resultado: %d\n",vet3[i]);
			}
		
		}
		
	
	}
	
	
	
}