#include <stdio.h>

void ordenaVetor(int *vetor, int tamanho) {
  int temp;
  int trocou;

  do {
    trocou = 0;
    for (int i = 1; i < tamanho; i++) {
      if (vetor[i - 1] > vetor[i]) {
        // Troca os elementos se estiverem fora de ordem
        temp = vetor[i - 1];
        vetor[i - 1] = vetor[i];
        vetor[i] = temp;
        trocou = 1;
      }
    }
  } while (trocou);
}

int main(void) {
  int vetor[] = {10, 5, 2, 3, 6, 7, 9, 1, 4};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);

  printf("Array original: ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  ordenaVetor(vetor, tamanho);

  printf("Vetor ordenado: ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  return 0;
}