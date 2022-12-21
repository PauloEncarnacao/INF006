/*
Questão 1 Especifique um TAD que seja capaz de armazenar uma data composta por dia, mês e ano e implemente
o seguinte conjunto de operações para manipular esse tipo Data:
■ uma função que recebe como parâmetro o dia, o mês, o ano e uma estrutura do tipo Data, onde o resultado deve
ser armazenado, e retorna verdadeiro se a data estiver válida; caso contrário, retorna falso. A validação da data pode
ser feita da seguinte forma:
■ meses com 30 dias: 04, 06, 09 e 11;
■ meses com 31 dias: 01, 03, 05, 07, 08, 10,12;
■ cálculo de ano bissexto: cada ano divisível por 4 é um ano bissexto(E); cada ano divisível por 100 não é bissexto
(OU); todo ano divisível por 400 sempre é um ano bissexto;
■ uma função que recebe como parâmetro uma data do tipo string (no formato DD/MM/AAAA) e uma estrutura do
tipo Data, onde o resultado deve ser armazenado, e retorna verdadeiro se a data estiver válida; caso contrário, retorna
falso;
■ uma função que recebe como parâmetro uma estrutura do tipo Data e um número inteiro, e retorna a soma do
número de dias da data recebida;
■ uma função que recebe como parâmetro uma estrutura do tipo Data e um número inteiro, e retorna a subtração do
número de dias da data recebida;
■ uma função que recebe como parâmetro uma data e escreve essa data por extenso. Por exemplo, 25/03/2007 deve
ser escrito como 25 de março de 2007. A função deve retornar verdadeiro se a operação for realizada
com sucesso e falso, caso contrário;
■ uma função que receba como parâmetro o ano e retorne a data da Páscoa. O domingo de Páscoa é o primeiro
domingo depois da primeira lua cheia do outono. Utilize o seguinte algoritmo, criado em 1800 pelo matemático
Carl Gauss:
■ suponha que y seja o ano (como 1800 ou 2001);
■ divida y por 19 e chame o resto de a. Ignore o quociente;
■ divida y por 100 para obter o quociente b e o resto c;
■ divida b por 4 para obter o quociente d e o resto e;
■ divida 8 * b + 13 por 25 para obter o quociente g. Ignore o resto;
■ divida 19 * a + b - d - g + 15 por 30 para obter o quociente h. Ignore o resto;
■ divida c por 4 para obter o quociente j e o resto k;
■ divida a + 11 * h por 319 para obter o quociente m. Ignore o resto;
■ divida 2 * e + 2 * j - k - h + m + 32 por 7 para obter o resto r. Ignore o quociente;
■ divida h - m + r + 90 por 25 para obter o quociente n. Ignore o resto;
■ divida h - m + r + n + 19 por 32 para obter o resto p. Ignore o quociente.
*/

