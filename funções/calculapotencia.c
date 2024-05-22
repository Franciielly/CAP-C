#include <stdio.h>

int calculapotencia (int base, int ex) {
  for (int i = 1; i <ex; i++) {
    base *= base;
    printf ("resultado: %d\n", base);
  }
  if  (ex==0) {
    printf ("resultado: 1"); 
  }
}

int main (){
  int b, e;
  printf ("digite a base: ");
  scanf ("%d", &b);
  printf ("digite o expoente: ");
  scanf ("%d", &e);
  calculapotencia (b, e);
  return 0;
  
}
