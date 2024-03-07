// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char nome[100];
//     int i = 0;

//     printf("Digite o seu nome completo: ");
//     fgets(nome, 100, stdin);

//     printf("%c", toupper(nome[0]));

//     while (nome[i] != '\0') {

//         if (nome[i] == ' ') {
//             printf("%c", toupper(nome[i+1]));
//         }
//         i++;
//     }

//     return 0;
// }

/////////////////////////////////////////////////////////

// EXERCICIO 5

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[100], str2[100];

//     printf("Digite a primeira string: ");
//     fgets(str1, 100, stdin);

//     printf("Digite a segunda string: ");
//     fgets(str2, 100, stdin);

//     if (strstr(str1, str2) != NULL) {
//         printf("A segunda string está contida na primeira.\n");
//     } else {
//         printf("A segunda string não está contida na primeira.\n");
//     }

//     return 0;
// }

////////////////////////////////////////////////////////////////

// EXERCICIO 4

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     int i, len;

//     printf("Digite uma string: ");
//     fgets(str, 100, stdin);

//     len = strlen(str) - 1;
//     printf("String de trás para frente: ");

//     for(i = len - 1; i >= 0; i--) {
//         printf("%c", str[i]);
//     }

//     return 0;
// }

///////////////////////////////////////////////////////////////

// EXERCICIO 3

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {

//     int matriz[10][3];
//     int i,j;
//     int menor0,menor1,menor2;
//     srand(time(0));

//     menor0 = 200;
//     menor1 = 200;
//     menor2 = 200;

//     for(i = 0 ; i < 10 ; i++){
//         for(j = 0 ; j < 3 ; j++){
//             matriz[i][j] = rand() % 100;
//             printf("%d ", matriz[i][j]);
//         }
//         printf("\n");

//         if(matriz[i][0] < menor0){
//             menor0 = matriz[i][0];
//         }
//         if(matriz[i][1] < menor1){
//             menor1 = matriz[i][1];
//         }
//         if(matriz[i][2] < menor2){
//             menor2 = matriz[i][2];
//         }
//     }

//     printf("A menor nota da primeira coluna foi: %d\n", menor0);
//     printf("A menor nota da segunda coluna foi: %d\n", menor1);
//     printf("A menor nota da terceira coluna foi: %d\n", menor2);

//     return 0;
// }

///////////////////////////////////////////////////////////

// EXERCICIO 2

// #include <stdio.h>
// int main() {

// int matriz[5][5];
// int i,j;

// for(i=0;i<5;i++){
//   for(j=0;j<5;j++){
//     if(i == j){
//       matriz[i][j] = 1;
//     }
//     else{
//       matriz[i][j] = 0;
//     }
//     printf("%d ", matriz[i][j]);
//   }
//   printf(" \n");
// }

//   return 0;

// }

//////////////////////////////////////////////////////////////

// EXERCICIO 1
//  #include <stdio.h>
//  #include <stdlib.h>
//  #include <time.h>

// int main() {
//   int maior, i, j;
//   int matriz[4][4];

//   srand(time(0));

//   maior = 0;

//   for (i = 0; i < 4; i++) {
//     for (j = 0; j < 4; j++) {
//       matriz[i][j] = rand() % 100;
//       printf("[%d,%d] %d\n", i, j, matriz[i][j]);
//       if (matriz[i][j] > maior) {
//         maior = matriz[i][j];
//       }
//     }
//   }
//   printf("O maior valor é: %d\n", maior);
//   return 0;
// }
