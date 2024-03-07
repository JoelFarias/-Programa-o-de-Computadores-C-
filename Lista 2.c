
#include <stdio.h>

int main() {
  int num;

  printf("Digite um número inteiro: ");
  scanf("%d", &num);
  if (num % 3 == 0 && num % 5 != 0) {
    printf("%d é divisível por 3, mas não por 5.\n", num);
  } else if (num % 5 == 0 && num % 3 != 0) {
    printf("%d é divisível por 5, mas não por 3.\n", num);
  } else if (num % 3 == 0 && num % 5 == 0) {
    printf("%d é divisível por ambos 3 e 5.\n", num);
  } else {
    printf("%d não é divisível por 3 nem por 5.\n", num);
  }
  return 0;
}

// EXERCICIO 6
// char operação[20];
// int x, y, z;

// printf("Digite a operação (soma, subtração, multiplicação, divisão): ");
// scanf("%s", operação);

// printf("Digite o primeiro número: ");
// scanf("%d", &y);

// printf("Digite o segundo número: ");
// scanf("%d", &z);

// if (strcmp(operação, "soma") == 0) {
//     x = y + z;
//     printf("Resultado: %d\n", x);
// } else if (strcmp(operação, "subtração") == 0) {
//     x = y - z;
//     printf("Resultado: %d\n", x);
// } else if (strcmp(operação, "multiplicação") == 0) {
//     x = y * z;
//     printf("Resultado: %d\n", x);
// } else if (strcmp(operação, "divisão") == 0) {
//     if (z != 0) {
//         x = y / z;
//         printf("Resultado: %d\n", x);
//     } else {
//         printf("Erro: Divisão por zero.\n");
//     }
// } else {
//     printf("Operação inválida.\n");
// }

// EXERCICIO 5
// int x;

// printf("Digite um número de 1 a 12: ");
// scanf("%d", &x);

// if (x == 1)
//     printf("Janeiro");
// else if (x == 2)
//     printf("Fevereiro");
// else if (x == 3)
//     printf("Março");
// else if (x == 4)
//     printf("Abril");
// else if (x == 5)
//     printf("Maio");
// else if (x == 6)
//     printf("Junho");
// else if (x == 7)
//     printf("Julho");
// else if (x == 8)
//     printf("Agosto");
// else if (x == 9)
//     printf("Setembro");
// else if (x == 10)
//     printf("Outubro");
// else if (x == 11)
//     printf("Novembro");
// else if (x == 12)
//     printf("Dezembro");
// else
//     printf("Este Mês não existe.");

// EXERCICIO 4
// char sexo;
// float altura, peso_ideal;

// printf("Você é homem (H) ou mulher (M)? ");
// scanf(" %c", &sexo);

// printf("Digite sua altura em metros: ");
// scanf("%f", &altura);

// if (sexo == 'H' || sexo == 'h') {
//     peso_ideal = (72.7 * altura) - 58;
//     printf("Seu peso ideal é: %.2f kg\n", peso_ideal);
// } else if (sexo == 'M' || sexo == 'm') {
//     peso_ideal = (62.1 * altura) - 44.7;
//     printf("Seu peso ideal é: %.2f kg\n", peso_ideal);
// } else {
//     printf("Sexo não reconhecido. Por favor, digite 'H' ou 'M'.\n");
// }

// EXERCICIO 3
// int x;

// printf("Digite o número ");
// scanf("%d", &x);

// if (x % 2 == 0) {
//   printf("O número é par ");
// } else {
//   printf("O número é ímpar ");
// }

// EXERCICIO 2
//  int x, y;

//  printf("Digite o primeiro número: ");
//  scanf("%d", &x);

//  printf("Digite o segundo número: ");
//  scanf("%d", &y);

// if (x > y) {
//     printf("O primeiro número é maior: %d\n", x);
// } else if (y > x) {
//     printf("O segundo número é maior: %d\n", y);
// } else {
//     printf("Os números são iguais.\n");
// }

// EXERCICIO 1
// int x, y;

// printf("Digite o primeiro número: ");
// scanf("%d", &x);

// printf("Digite o segundo número: ");
// scanf("%d", &y);

// if (x > y) {
//     printf("O maior número é %d\n", x);
// } else {
//     printf("O maior número é %d\n", y);
// }

// EXERCICIO 4
// char sexo;
// float altura, peso_ideal;

// printf("Você é homem (H) ou mulher (M)? ");
// scanf(" %c", &sexo);

// printf("Digite sua altura em metros: ");
// scanf("%f", &altura);

// if (sexo == 'H' || sexo == 'h') {
//     peso_ideal = (72.7 * altura) - 58;
//     printf("Seu peso ideal é: %.2f kg\n", peso_ideal);
// } else if (sexo == 'M' || sexo == 'm') {
//     peso_ideal = (62.1 * altura) - 44.7;
//     printf("Seu peso ideal é: %.2f kg\n", peso_ideal);
// } else {
//     printf("Sexo não reconhecido. Por favor, digite 'H' ou 'M'.\n");
// }

// EXERCICIO 3
// int x;

// printf("Digite o número ");
// scanf("%d", &x);

// if (x % 2 == 0) {
//   printf("O número é par ");
// } else {
//   printf("O número é ímpar ");
// }

// EXERCICIO 2
//  int x, y;

//  printf("Digite o primeiro número: ");
//  scanf("%d", &x);

//  printf("Digite o segundo número: ");
//  scanf("%d", &y);

// if (x > y) {
//     printf("O primeiro número é maior: %d\n", x);
// } else if (y > x) {
//     printf("O segundo número é maior: %d\n", y);
// } else {
//     printf("Os números são iguais.\n");
// }

// EXERCICIO 1
// int x, y;

// printf("Digite o primeiro número: ");
// scanf("%d", &x);

// printf("Digite o segundo número: ");
// scanf("%d", &y);

// if (x > y) {
//     printf("O maior número é %d\n", x);
// } else {
//     printf("O maior número é %d\n", y);
// }