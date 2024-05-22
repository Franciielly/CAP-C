#include <stdio.h>

int main () {
	float o, s=0, d, dt, sq, sqt, p, pt;
	char pix [20];
	
	printf ("---------------------------\n");
	printf ("     conta corrente\n");
	printf ("---------------------------\n");
	printf ("digite sua opcao: \n");
	printf ("1- saldo\n");
	printf ("2- depositar\n");
	printf ("3- sacar\n");
	printf ("4- fazer pix\n");
	printf ("5- sair\n");
	scanf ("%f", &o);
	
	switch (o) {
	case 1:
		printf ("seu saldo e de R$%2.f", s);
		break;
	
	case 2:
			printf ("digite quanto voce quer depositar: \n");
			scanf ("%f", &d);
			if (d>0) {
			dt= d+s;
			printf ("voce depositou R$%2.f\n", d);
			printf ("saldo atual R$%2.f\n", dt); }
		else if {
			printf ("desculpe, nao e possivel fazer seu deposito!\n";)
		}
		break;
	case 3:
		printf ("digite quanto voce quer sacar: \n");
		scanf ("%f", &sq);
		sqt= s-sq;
		printf ("voce sacou R$%2.f\n", sq);
		printf ("saldo atual R$%2.f\n", sqt);
	case 4:
		printf ("digite a chave pix: \n");
		scanf (" %s", &pix);
		printf ("digite de quanto e o pix: \n");
		scanf ("%f", &p);
		pt= s-p;
		printf ("pix feito com sucesso!\n");
		printf ("saldo atual R$%f", pt);
		break;
	case 5:
		break;
		
	}	
}
