//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 

#include <stdio.h>  

int main () 
{ 

int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
int mes; 
int correcto = 0; 

while (correcto == 0) 
{ 
printf ("\n Introduzca el mes del que desea saber su cantidad de dias (No habilitado para ano bisiesto). 1 = Enero, ..., 12 = Diciembre\n ->" ); 

scanf ("%i", &mes); // Guardando Valor 

if (mes < 1 || mes > 12) 
printf ("El valor es incorrecto\n"); //mantenemos el valor en un rango de 1 a 12
else 
{ 

--mes; 
correcto = 1; 
} 
} 

printf ("\nEl mes introducido tiene %i dias\n", dias[mes]); 
}
