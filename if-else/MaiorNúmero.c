#include <stdio.h>

main () {
	int n1, n2, maior;
	printf ("digite o primeiro numero:\n");
	scanf ("%d", &n1);
	printf ("digite o segundo numero:\n");
	scanf ("%d", &n2);
	
	if (n1>n2) {
		printf ("o primeiro numero e o maior numero");
	}
	else if (n2>n1) {
	 printf ("o segundo numero e o maior numero");
	}
	else if (n1==n2) {
		printf ("os numeros sao iguais\n");
	}
	
	
	
}
