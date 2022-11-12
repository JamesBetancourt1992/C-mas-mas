//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 

#include <iostream>
#include <stdio.h>

using namespace std;

void pide_diaymes(); 
int calcula_Dia(int dia, int mes); 
int mes;
int dia;
//dias
int numDiasMeses[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//meses
char *nombreMeses[12] = { "Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

int main()
{
do {

pide_diaymes();

if(dia ==0 || mes ==0) break;

if (dia < 0)
{
printf("\nEl numero de dia no es correcto.");
continue;
}
else if (mes > 12 || mes < 0)
{
printf("\nEl numero de mes no es correcto.");
continue;
}
else if (dia > numDiasMeses[mes-1])
{
printf("\n%s solo tiene %d dias.",nombreMeses[mes-1],numDiasMeses[mes-1]);
continue;
}


printf("\n Es el dia numero: %d",calcula_Dia(dia,mes));

printf("\n Para que finalice el a%co faltan %d",164, 365-calcula_Dia(dia,mes), "\ndias");

} while(dia !=0 ||mes !=0);
printf("\nAdios!");
return 0;
}

void pide_diaymes()
{
printf("\n\nIntroduce el mes: (0 para salir): ");
scanf("%d",&mes);
printf("\nAhora introduce el dia de ese mes: (0 para salir): ");
scanf("%d",&dia);
}

int calcula_Dia(int dia, int mes)
{
int resultado = 0;

for(int i = 0; i< (mes-1); i++)
{
resultado+=numDiasMeses[i];
}

resultado+=dia;

return resultado;
}

