#include <stdio.h>

main (){
	
int dia, ano, mes;


printf ("digite o dia:\n");
scanf ("%d", &dia);
printf ("digite o mes:\n");
scanf ("%d", &mes);
printf ("digite o ano:\n");
scanf ("%d", &ano);

switch (mes) {
case 1:
printf ("%d de janeiro de %d\n", dia, ano);
break; 
case 2:
printf ("%d de fevereiro de %d\n", dia, ano);
break;
case 3:
printf ("%d de marco de %d\n", dia, ano);
break; 
case 4:
printf ("%d de abril de %d\n", dia, ano);
break;
case 5:
printf ("%d de maio de %d\n", dia, ano);
break;
case 6:
printf ("%d de junho de %d\n", dia, ano);
break;
case 7:
printf ("%d de julho de %d\n", dia, ano);
break;
case 8:
printf ("%d de agosto de %d\n", dia, ano);
break;
case 9:
printf ("%d de setembro de %d\n", dia, ano);
break;
case 10:
printf ("%d de outubro de %d\n", dia, ano);
break;
case 11:
printf ("%d de novembro de %d\n", dia, ano);
break;
case 12:
printf ("%d de dezembro de %d\n", dia, ano);

}

}
