#include <math.h>
#include <stdio.h>

return 0;
}

// double calcularDesvioPadrao(int arr[], int n) {
//     double soma = 0.0, media, desvioPadrao = 0.0;

//     for(int i=0; i<n; ++i) {
//         soma += arr[i];
//     }

//     media = soma/n;

//     for(int i=0; i<n; ++i)
//         desvioPadrao += pow(arr[i] - media, 2);

//     return sqrt(desvioPadrao/n);
// }

// int main() {
//     int arr[10] = {4, 2, 8, 9, 5, 7, 7, 1, 2, 3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Desvio Padrão = %.6f", calcularDesvioPadrao(arr, n));

// int array[10];
// int i, j;

// printf("Insira 10 números:\n");
// for (i = 0; i < 10; i++) {
//     scanf("%d", &array[i]);
// }

// printf("Números repetidos:\n");
// for (i = 0; i < 10; i++) {
//     for (j = i + 1; j < 10; j++) {
//         if (array[i] == array[j]) {
//             printf("%d\n", array[i]);
//             break;
//     }
// }

//  int i;
//  int array[100];

// for (i = 0; i < 100; i++) {
//         array[i] = i + 1;
//     }

//     for (i = 0; i < 100; i++) {
//         if (array[i] % 7 != 0) {
//             printf("%d ", array[i]);
//         }
//     }

//   int i, soma,negativos;
//   soma = 0;
//   negativos = 0;
//   int array[10];
//   printf("insira 10 números:\n");
//   for (i = 0; i < 10; i++) {
//       scanf("%d", &array[i]);
//   }
//   for(i = 0; i < 10; i++){
//       if (array[i] > 0){
//           soma = array[i] + soma;
//       }
//         else if (array[i] < 0){
//          negativos++;
//       }
//   }
// printf("A quantidade de números negativos é : %d\n", negativos);
// printf("A soma dos números positivos é: %d\n", soma);

//  int array[6] = {1,0,5,-2,-5,7};
//  int soma,i;
//     soma = array[0] + array[1] + array[5];

//    printf("A soma é %d\n", soma);

//  array[4] = 100;

// for(i = 0; i < 6; i++) {
//        printf("array[%d] = %d\n", i, array[i]);
//    }
