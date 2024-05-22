#include <stdio.h>

int verificaMaiorValor(int *numeros, int tamanho) {

  int maiorValor;

  for (int i = 0; i < tamanho; i++) {
    if (numeros[i] > maiorValor)
      maiorValor = numeros[i];
  }

  return maiorValor;
}

int main(void) {
  int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int tamanho = sizeof(numeros) / sizeof(numeros[0]);
  int maiorValor = verificaMaiorValor(numeros, tamanho);
  printf("O maior valor é %i", maiorValor);
  return 0;
}
