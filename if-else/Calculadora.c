#include <stdio.h>

main () {
	
 float n1, n2, res;
 char op;
 
 printf ("digite o primeiro numero:\n");
 scanf ("%f", &n1);
 printf ("digite o segundo numero:\n");
 scanf ("%f", &n2);
 printf ("escolha a operacao:\n");
 scanf (" %c", &op);
 
 if (op == '+') {
	 res= n1+n2;
	 printf ("o resultado e: %.2f\n", res);
 }
 else if (op == '-') {
	 res = n1-n2;
	 printf ("o resultado e: %.2f\n", res);
 }
  else if (op =='x') {
	  res= n1 * n2;
	  printf ("o resultado e: %.2f\n", res);
  }
  else if ( op == '/') {
	  res= n1/n2;
	  printf ("o resultado e: %.2f\n", res);
  }
	
}
