/*
5) Que leia os elemntos de uma matrix 10x10 e mostre somente os elementos abaixo da diagonal;
*/

#include <stdio.h>
#include <stdlib.h>
#define size 10

int main(){
	
	
int matriz[size][size];
int l,c;
for(int i=0; i<size; i++){
	for(int j=0; j<size; j++)
		scanf("%d",&matriz[i][j]);
	printf("\n");
	
}

    printf("\n\nMatriz gerada:\n");
    for(l = 0; l < size; l++){
        for(c = 0; c < size; c++)
            printf("%2d ", matriz[l][c]);
        printf("\n");
    }

    printf("\n\nAbaixo da diagonal principal:\n");
    for(l = 0; l < size; l++){
        for(c = 0; c < size; c++){
            if(l > c)
                printf("%2d ", matriz[l][c]);
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n\n");

	
	return 0;
}
