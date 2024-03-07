#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

float calculaDistancia(struct Ponto p1, struct Ponto p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    struct Ponto ponto1, ponto2;

    printf("Digite as coordenadas do primeiro ponto (x y): ");
    scanf("%f %f", &ponto1.x, &ponto1.y);

    printf("Digite as coordenadas do segundo ponto (x y): ");
    scanf("%f %f", &ponto2.x, &ponto2.y);

    float distancia = calculaDistancia(ponto1, ponto2);

    printf("A distância entre os dois pontos é %.2f.\n", distancia);

    return 0;
}





































// #include <stdio.h>

// struct data{
//     int dia;
//     int mes;
//     int ano;
// };

// int calculaDias(struct data d) {
//     return d.ano * 365 + d.mes * 30 + d.dia;
// }

// int main(){
//     struct data data1, data2;

//     printf("Digite a primeira data (dia mes ano): ");
//     scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

//     printf("Digite a segunda data (dia mes ano): ");
//     scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

//     int diasData1 = calculaDias(data1);
//     int diasData2 = calculaDias(data2);

//     printf("A diferença entre as duas datas é de %d dias.\n", abs(diasData1 - diasData2));

//     return 0;
}
























// struct tempo {
//     int hora;
//     int min;
//     int seg;
// };

// int main(void) {
//     struct tempo vetor[5]; 
//     int i;

//     for (i = 0; i < 5; i++) {
//         printf("Digite a hora, minuto e segundo para a entrada %d (no formato hh mm ss): ", i + 1);
//         scanf("%d %d %d", &vetor[i].hora, &vetor[i].min, &vetor[i].seg);
//     }

//     struct tempo maiorHora = vetor[0];

//     for (i = 1; i < 5; i++) {
//         if (vetor[i].hora > maiorHora.hora || 
//             (vetor[i].hora == maiorHora.hora && vetor[i].min > maiorHora.min) || 
//             (vetor[i].hora == maiorHora.hora && vetor[i].min == maiorHora.min && vetor[i].seg > maiorHora.seg)) {
//             maiorHora = vetor[i];
//         }
//     }

//     printf("A maior hora é: %02d:%02d:%02d\n", maiorHora.hora, maiorHora.min, maiorHora.seg);

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////