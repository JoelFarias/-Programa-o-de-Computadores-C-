#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

bool verificaSubstring(const char *str1, const char *str2) {
  const char *p1, *p2;

  while (*str1 != '\0') {
    p1 = str1;
    p2 = str2;

    while (*p1 == *p2 && *p2 != '\0') {
      p1++;
      p2++;
    }

    if (*p2 == '\0') {
      return true;
    }

    str1++;
  }

  return false;
}

int main() {
  const char *str1 = "Isso é um exemplo";
  const char *str2 = "exemplo";

  if (verificaSubstring(str1, str2)) {
    printf("A segunda string ocorre na primeira.\n");
  } else {
    printf("A segunda string NÃO ocorre na primeira.\n");
  }

  return 0;
}

//////////////////////////// Exercicio 1

// int array[5];
//      int i;
//      int *ptr;

//     srand(time(0));

//     for(i = 0; i < 5; i++){
//         array[i] = rand() % 100;

//     }

// ptr = array;

//   for (i = 0; i < 5; i++) {
//       if(*(ptr + i) % 2 == 0){
//         printf("%p\n", (ptr + i));
//       }

//   }