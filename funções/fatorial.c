#include <stdio.h>
int calculaFatorial(int n) {
  int fatorial = 1;
  if (n == 0)
    return 1;
  else {
    while (n > 1) {
      fatorial = fatorial * n;
      n--;
    }
    return fatorial;
  }
}

int main (void) {
  int n, fatorial;

  do {
    printf("Informe um número natural:\n");
    scanf("%i", &n);
    if (n < 0) {
      printf("O número informado não é natural\n\n");
    }
  } while (n < 0);

  fatorial = calculaFatorial(n);
  printf("n! = %i", fatorial);

  return 0;
}