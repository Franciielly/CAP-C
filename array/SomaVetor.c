#include <stdio.h>

int somaVetor(int *vetor, int tamanho) {
  int soma = 0;
  for (int i = 0; i < tamanho; i++) {
    soma += vetor[i];
  }

  return soma;
}

int main(void) {
  int vetor[] = {10, 5, 2, 3, 6, 7, 9, 1, 4};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);
  int soma = somaVetor(vetor, tamanho);
  printf("%i", soma);
  return 0;
}