#include <stdio.h>

float area(float n1, float n2);

int main() {
  float l1, l2, res;
  printf("Digite um lado do quadrado: ");
  scanf("%f", &l1);
  printf("Digite o outro lado do quadrado: ");
  scanf("%f", &l2);
  
  res = area(l1, l2);
  printf("A área do quadrado é: %.2f", res);
  
  return 0;
}

float area(float n1, float n2) {
  float r;
  r = n1 * n2;
  return r;  
}
