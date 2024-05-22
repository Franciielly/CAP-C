#include <stdio.h>

int inverteVetor(int *vetor, int tamanho) {

  int vetorInvertido[tamanho];

  for (int i = 0; i < tamanho; i++) {
    vetorInvertido[i] = vetor[tamanho - i - 1];
  }

  for (int i = 0; i < tamanho; i++)
    printf("%i ", vetorInvertido[i]);

  return *vetorInvertido;
}

int main(void) {
  int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);
  inverteVetor(vetor, tamanho);
  return 0;
}