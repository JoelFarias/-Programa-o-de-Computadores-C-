#include <stdio.h>

int main() {
  int quantidade, numero, maior, contador = 0;

  printf("Digite a quantidade de números a serem lidos: ");
  scanf("%d", &quantidade);

  printf("Digite o número 1: ");
  scanf("%d", &maior);

  for (int i = 2; i <= quantidade; i++) {
    printf("Digite o número %d: ", i);
    scanf("%d", &numero);

    if (numero > maior) {
      maior = numero;
      contador = 1;
    } else if (numero == maior) {
      contador++;
    }
  }

  printf("O maior número é: %d\n", maior);
  printf("Ele foi lido %d vez(es).\n", contador);

  return 0;
}

// EXERCICIO 3
// int N;
// double S = 0.0;

// printf("Digite o valor de N: ");
// scanf("%d", &N);

// for (int i = 1; i <= N; i++) {
//     S += (double)(2 * i - 1) / i;
// }

// printf("O valor da somatória S é: %.2lf\n", S);

// EXERCICIO 2
// int x;
// int i;
// printf("Digite um número: ");
// scanf("%d", &x);
// printf("Os divisores do número %d são: ", x);

// for (i = 1; i <= x / 2; i++) {
//     if (x % i == 0)
//         printf("%d ", i);
// }

// printf("%d", x);

// EXERCICIO 1
// int x;
// int maior = 0;
// int menor = 99999999999;

// printf("Digite um número ");
// scanf("%d", &x);
// while (x > 0) {
//     if (x > maior)
//         maior = x;
//     else if (x < menor)
//         menor = x;

//     printf("Digite um número ");
//     scanf("%d", &x);
// }
// printf("%d\n", maior);
// printf("%d\n", menor);