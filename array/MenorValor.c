#include <stdio.h>

int verificaMenorValor(int *numeros, int tamanho) {

  int menorValor;

  for (int i = 0; i < tamanho; i++) {
    if (!(numeros[i] > menorValor))
      menorValor = numeros[i];
  }

  return menorValor;
}

int main(void) {
  int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int tamanho = sizeof(numeros) / sizeof(numeros[]);
  int menorValor = verificaMenorValor(numeros, tamanho);
  printf("O menor valor é %i", menorValor);
  return 0;
}