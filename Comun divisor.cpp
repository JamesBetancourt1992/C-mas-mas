//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>



int main ()
{
	
int n,x,z,rta;

printf("\t\t    ..PROGRAMA PARA COMUN DIVISOR..");
printf("\n\t\t****************************************");
printf("\nEscriba un Numero:\n");
scanf("%d",&n);
printf("\nEscriba un segundo Numero;\n");
scanf("%d",&x);
printf("\nEscriba un tercer Numero;\n");
scanf("%d",&z);
rta=(n%x%z);

if	(n>x)
{
	if (n%x==0){
	printf("\n%.d Es Comun Divisor de %.d \n",n,x);
}	
else
{
	printf("\n%.d No Es Comun Divisor de %.d \n",n,x);
}
}

if (n>z)
{
if (n%z==0){
	printf("\n%.d Es  Comun Divisor de %.d \n",n,z);
}	
else
{
	printf("\n%.d No es Comun Divisor  de %.d \n",n,z);
}
		
}


system ("PAUSE");
    printf("\n\n\t\t*************************************\n");
    printf("\t\t\t   ..Programa Finalizado..\n");
	printf("\t\t\t      ..Hasta Pronto..\n");
	printf("\t\t*************************************");
return 0;
	
}