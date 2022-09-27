#include <stdio.h>

/*

1) Que imprima o horóscopo de varias pessoas, a aprtir da sua data de nascimento (ddmm). O fim é determinado quando se digita 9999 para data. considera que a data foi digitada corretamente.

01-20 Capricornio
02-19 Aquario
03-20 Peixes
04-20 Aries
05-20 Touro
06-20 Gemeos
07-21 Cancer
08-22 Leão
09-22 Virgem
10-22 Libra
11-21 Escorpião
12-21   Sargitario

*/


int main() {
  int dia, mes;

  printf("Informe o dia de nascimento:\n");
  scanf("%d", &dia);

  printf("\nInforme o mes de nascimento:\n");
  scanf("%d", &mes);

  if (((mes == 12) && ((dia >= 22) && (dia <= 31))) ||
      ((mes == 1)  && ((dia >= 1)  && (dia <= 20))))
     printf("\nCapricornio.");
  else if (((mes == 1) && ((dia >= 21) && (dia <= 31))) ||
           ((mes == 2) && ((dia >= 1)  && (dia <= 19))))
          printf("\nAquario.");
  else if (((mes == 2) && ((dia >= 20) && (dia <= 29))) ||
           ((mes == 3) && ((dia >= 1)  && (dia <= 20))))
          printf("\nPeixes.");
  else if (((mes == 3) && ((dia >= 21) && (dia <= 31))) ||
           ((mes == 4) && ((dia >= 1)  && (dia <= 20))))
          printf("\nAries.");
  else if (((mes == 4) && ((dia >= 21) && (dia <= 30))) ||
           ((mes == 5) && ((dia >= 1)  && (dia <= 20))))
          printf("\nTouro.");
  else if (((mes == 5) && ((dia >= 21) && (dia <= 31))) ||
           ((mes == 6) && ((dia >= 1)  && (dia <= 20))))
          printf("\nGemeos.");
  else if (((mes == 6) && ((dia >= 21) && (dia <= 30))) ||
           ((mes == 7) && ((dia >= 1)  && (dia <= 21))))
          printf("\nCancer.");
  else if (((mes == 7) && ((dia >= 22) && (dia <= 31))) ||
           ((mes == 8) && ((dia >= 1)  && (dia <= 22))))
          printf("\nLeao.");
  else if (((mes == 8) && ((dia >= 23) && (dia <= 31))) ||
           ((mes == 9) && ((dia >= 1)  && (dia <= 22))))
          printf("\nVirgem.");
  else if (((mes == 9)  && ((dia >= 23) && (dia <= 30))) ||
           ((mes == 10) && ((dia >= 1)  && (dia <= 22))))
          printf("\nLibra.");
  else if (((mes == 10) && ((dia >= 23) && (dia <= 31))) ||
           ((mes == 11) && ((dia >= 1)  && (dia <= 21))))
          printf("\nEscorpiao.");
  else if (((mes == 11) && ((dia >= 22) && (dia <= 30))) ||
           ((mes == 12) && ((dia >= 1)  && (dia <= 21))))
          printf("\nSagitario.");
       else
          printf("\nErro: dia ou mes de nascimento invalidos !!!");
}