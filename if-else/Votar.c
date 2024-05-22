#include <stdio.h>

main () {
	int ano, n, anoatual;
	char nome [15];
	
	printf ("Digite seu nome:\n");
	scanf (" %s", &nome);
	printf ("Informe seu ano de nascimento:\n");
	scanf (" %d", &ano);
	printf ("Infome o ano que estamos:\n");
	scanf ("%d", &anoatual);
	
	n= anoatual - ano;
	
	if (n >= 18) {
		printf ("%s voce tem %d e ja pode votar\n", nome, n);
	}
	else if (n < 18) {
		printf ("%s voce tem %d e ainda nao pode votar\n", nome, n);
	}
}
