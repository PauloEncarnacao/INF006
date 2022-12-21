/*
1 – Faça um programa que leia n nomes
inserindo-os em uma lista de forma ordenada
utilizando a ideia do algoritmo da inserção. No
final, o programa deve mostrar todos os nomes
ordenados alfabeticamente.
*/





void insertion_sort(int *a);

typedef struct {

char nome[100];
}nome;

int main(){

do{

  
}while()

  
return 0;
}





void insertion_sort(int *a){
 int i, j, tmp;
  
 for(i = 1; i < MAX; i++)
 {
  tmp = a[i];
  for(j = i-1; j >= 0 && tmp < a[j]; j--)
  {
   a[j+1] = a[j];
  }
  a[j+1] = tmp;
 }
}