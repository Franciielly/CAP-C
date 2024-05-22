#include <stdio.h>

double calculaMedia(double notas[], int tamanho) {

  double media = 0;

  for (int i = 0; i < tamanho; i++) {
    media += notas[i];
  }
  return media / tamanho;
}

int main(void) {
  int qtdNotas;
  printf("Informe a quantidade de notas\n");
  scanf("%i", &qtdNotas);

  double notas[qtdNotas];

  for (int i = 0; i < qtdNotas; i++) {
    printf("Informe a nota %i\n", i + 1);
    scanf("%lf", &notas[i]);
  }

  double media = calculaMedia(notas, qtdNotas);
  printf("A média é %.2lf", media);
  return 0;
}
