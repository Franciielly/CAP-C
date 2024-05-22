#include <stdio.h>

main () {
	float n1, n2, sub;
	printf ("digite um numero\n");
	scanf ("%f", &n1);
	printf ("digite o segundo numero:\n");
	scanf ("%f", &n2);
	
	if ( n1 > n2 ) {
		sub = n1-n2;
	
	}
	
	else if ( n2 > n1) {
		sub = n2-n1;
	
	}
	printf ("a diferenca eh:%.1f\n", sub);
	
	
	
	
	
}
