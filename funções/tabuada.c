#include <stdio.h>

int imprimetabuada (int n, int i) {
  for (i=0; i<=10; i++) {
    printf ("%d X %2d = %d\n", n, i, n*i);
    
  }
} 

  int main () {
    int v, i;
    printf ("digite um numero: ");
    scanf ("%d", &v);
    imprimetabuada (v, i);
  
}
