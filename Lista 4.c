#include <math.h>
#include <stdio.h>

// Questão 3:
int converterHorarioParaSegundos(int horas, int minutos, int segundos) {
  return horas * 3600 + minutos * 60 + segundos;
}

// Questão 4:
int diferencaEntreHorarios(int h1, int m1, int s1, int h2, int m2, int s2) {
  int tempo1 = converterHorarioParaSegundos(h1, m1, s1);
  int tempo2 = converterHorarioParaSegundos(h2, m2, s2);

  if (tempo2 >= tempo1) {
    return tempo2 - tempo1;
  } else {
    return -1;
  }
}

// Questão 5:
float calcularMedia(float nota1, float nota2, float nota3, char tipoMedia) {
  if (tipoMedia == 'A') {
    return (nota1 + nota2 + nota3) / 3.0;
  } else if (tipoMedia == 'P') {
    return (5 * nota1 + 3 * nota2 + 2 * nota3) / 10.0;
  } else {
    return -1;
  }
}

// Questão 6:
void separarParteInteiraFracionaria(double numero, int *parteInteira,
                                    double *parteFracionaria) {
  *parteInteira = (int)numero;
  *parteFracionaria = numero - *parteInteira;
}

// Questão 7:
void calcularVolumeAreaEsfera(double raio, double *volume, double *area) {
  const double pi = 3.141592;
  *volume = (4.0 / 3.0) * pi * pow(raio, 3);
  *area = 4 * pi * pow(raio, 2);
}

// int eBissexto(int ano) {
//     if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
//         return 1;
//     } else {
//         return 0;
//     }
// }

// int main() {
//     int ano;

//     printf("Digite um ano: ");
//     scanf("%d", &ano);

//     if (eBissexto(ano)) {
//         printf("%d é um ano bissexto.\n", ano);
//     } else {
//         printf("%d não é um ano bissexto.\n", ano);
//     }

//     return 0;
// }

// int encontrarMaior(int num1, int num2) {
//     if (num1 > num2) {
//         return num1;
//     } else {
//         return num2;
//     }
// }

// int main() {
//     int num1, num2;

//     printf("Digite o primeiro número: ");
//     scanf("%d", &num1);

//     printf("Digite o segundo número: ");
//     scanf("%d", &num2);

//     int maior = encontrarMaior(num1, num2);

//     printf("O maior número é: %d\n", maior);

//     return 0;
// }
