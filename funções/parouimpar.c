#include <stdio.h>

int parouimpar (int n1) {
  if (n1%2==0) {
    printf ("verdadeiro\n");
  }
  else {
    printf ("falso\n");
  }
}

int main() {
  int v1;
  printf ("digite um numero:\n");
  scanf ("%d", &v1);
  parouimpar (v1);
  return 0;
}