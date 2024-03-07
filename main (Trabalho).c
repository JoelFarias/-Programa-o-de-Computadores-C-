#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMES 100
#define TAM_NOME 50
#define TAM_TELEFONE 15

typedef struct {
  char nome[TAM_NOME];
  char telefone[TAM_TELEFONE];
} Contato;

int cadastrarContato(Contato *agenda, int *numContatos) {
  printf("Digite o nome (ou 0 para encerrar): ");
  scanf("%s", agenda[*numContatos].nome);

  if (strcmp(agenda[*numContatos].nome, "0") == 0) {
    return 0;
  }

  printf("Digite o telefone: ");
  scanf("%s", agenda[*numContatos].telefone);
  (*numContatos)++;

  return 1;
}

void salvarEmArquivo(Contato *agenda, int numContatos) {
  FILE *arquivo;
  arquivo = fopen("agenda.txt", "w");

  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    exit(1);
  }

  for (int i = 0; i < numContatos; i++) {
    fprintf(arquivo, "%s %s\n", agenda[i].nome, agenda[i].telefone);
  }

  fclose(arquivo);
}

int main(void) {
  Contato agenda[MAX_NOMES];
  int numContatos = 0;

  while (numContatos < MAX_NOMES && cadastrarContato(agenda, &numContatos))
    ;

  salvarEmArquivo(agenda, numContatos);

  printf("Cadastro salvo no arquivo 'agenda.txt'\n");

  return 0;
}

//////////////////////////////QUESTÃO 2/////////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>
// #define TAM 100

// int main(void) {
//     FILE *arq;
//     char nomearq1[TAM];
//     int contar[26] = {0}, c;

//     printf("Digite o nome do arquivo: ");
//     scanf("%s", nomearq1);

//     arq = fopen(nomearq1, "r");
//     if (arq == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         exit(0);
//     }

//     while ((c = fgetc(arq)) != EOF) {
//         if (c >= 'A' && c <= 'Z') {
//             contar[c - 'A']++;
//         } else if (c >= 'a' && c <= 'z') {
//             contar[c - 'a']++;
//         }
//     }

//     fclose(arq);

//     for (int i = 0; i < 26; i++) {
//         if (contar[i] != 0) {
//             printf("%c aparece %d vezes\n", i + 'A', contar[i]);
//         }
//     }

//     return 0;
// }

///////////////////////////////QUESTÃO1/////////////////////////////////////////
// #include <stdio.h>
// #define TAM 100

// int main(void) {
//     FILE *arq, *arq2, *arq3;
//     char nomearq1[100], nomearq2[100], nomearq3[100];
//     char linha[TAM];
//     int escolha;

//     printf("Digite o nome do arquivo 1: ");
//     scanf("%s", nomearq1);

//     arq = fopen(nomearq1, "w+");
//     while (1) {
//         printf("Escolha '1' para adicionar uma nova linha ao arquivo 1 ou '2'
//         para encerrar\n"); scanf("%d", &escolha); if (escolha == 1) {
//             printf("Digite a linha: ");
//             scanf(" %[^\n]", linha);
//             fprintf(arq, "%s\n", linha);
//         } else if (escolha == 2) {
//             break;
//         }
//     }

//     printf("Digite o nome do arquivo 2: ");
//     scanf("%s", nomearq2);

//     arq2 = fopen(nomearq2, "w+");
//     while (1) {
//         printf("Escolha '1' para adicionar uma nova linha ao arquivo 2 ou '2'
//         para encerrar\n"); scanf("%d", &escolha); if (escolha == 1) {
//             printf("Digite a linha: ");
//             scanf(" %[^\n]", linha);
//             fprintf(arq2, "%s\n", linha);
//         } else if (escolha == 2) {
//             break;
//         }
//     }

//     printf("Digite o nome do arquivo 3: ");
//     scanf("%s", nomearq3);

//     arq3 = fopen(nomearq3, "w+");
//     rewind(arq);
//     while (fgets(linha, TAM, arq) != NULL) {
//         fprintf(arq3, "%s", linha);
//     }
//     rewind(arq2);
//     while (fgets(linha, TAM, arq2) != NULL) {
//         fprintf(arq3, "%s", linha);
//     }

//     fclose(arq);
//     fclose(arq2);
//     fclose(arq3);

//     return 0;
// }
