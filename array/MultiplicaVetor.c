#include <stdio.h>

int multiplicaVetor(int *vetor, int tamanho) {
  int produto = 1;
  for (int i = 0; i < tamanho; i++) {
    produto *= vetor[i];
  }

  return produto;
}

int main(void) {
  int vetor[] = {10, 5, 2, 3, 6, 7, 9, 1, 4};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);
  int produto = multiplicaVetor(vetor, tamanho);
  printf("%i", produto);
  return 0;
}