#include <stdio.h>

int main () {
	int vetor [5];
	int i;
	int p;
	int num;
	int po;
	
	for (i = 0; i<5; i++) {
		printf ("Digite um numero: ");
		scanf ("%d", &vetor[i]);
	}
	printf ("Digite a posicao do numero que gostaria: ");
	scanf ("%d", &p);
	num = p-1;
	printf ("o numero presente na posicao %d e: ", vetor[num]);
	
}


