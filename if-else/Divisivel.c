#include <stdio.h>

main () {
  int n1, div;
  printf ("digite um numero:\n");
  scanf ("%d", &n1);

  if (n1%5==0) {
    printf ("o numero eh divisivel por 5\n");
  }
  else if (n1%4==0){
    printf ("o numero eh divisivel por 4\n");
  }

  
  else if (n1 % 4 || 5 != 0) {
     printf("esse numero nao e divisivel por 4 ou 5\n");
  }
 
}
