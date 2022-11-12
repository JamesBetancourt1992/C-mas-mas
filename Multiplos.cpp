//Nombre del Autor:Andres_Cruz
//Fecha:21/04/2015
//Doy fe que este ejercicio es de mi autoría,
//en caso de encontrar plagio la nota de todo mi 
//trabajo debe ser de CERO además de
//las respectivas sanciones a que haya lugar

#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>


int main ()
{
	
int n,z,rta;

printf("\t\t..PROGRAMA PARA CALCULAR MULTIPLOS..");
printf("\n\t\t****************************************");
printf("\nEscriba un Numero:\n");
scanf("%d",&n);
printf("Escriba un segundo Numero;\n");
scanf("%d",&z);
rta=(z%n);
if (rta==0)
	printf("%.d Es Multiplo de %.d\n",z,n);
else
	printf("%.d No es Multiplo de %.d\n",z,n);

system ("pause");
    printf("\n\n\t\t*************************************\n");
    printf("\t\t\t..Programa Finalizado..\n");
	printf("\t\t\t..Hasta Pronto..\n");
	printf("\t\t*************************************");
return 0;
	
}

