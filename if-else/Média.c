#include <stdio.h>

main () {
 float n1, n2, n3, media;
 char nome[15];

	printf ("digite a primeira nota:\n");
	scanf ("%f", &n1);
	printf ("digite a segunda nota:\n");
	scanf ("%f", &n2);
	printf ("digite a terceira nota:\n");
	scanf ("%f", &n3); 
	printf ("digite seu nome:\n");
	scanf (" %s", &nome);
	
	media = (n1 + n2 + n3)/3;
	
	if (media>=7) {
		printf ("%s sua nota e %.1f e voce foi aprovado", nome, media);
	}
	else if (media<= 5) {
		printf ("%s sua nota foi %.1f e foi reprovado", nome, media);
	}
	else if ( media>= 5.1 <= 6.9) {
	 printf ("0%s sua nota foi %.1f e voce foi para recuperacao", nome, media);
	}
		
	}
