//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h> 

int main () 
{ 
 
int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //guardamos valores de 12 datos
int mes; //definimos variable
int correcto = 0; 

while (correcto == 0) //generamos condicion 
{ 
printf ("\n 1=Enero \n 2=Febrero \n 3=Marzo \n 4=Abril \n 5=Mayo \n 6=Junio \n 7=Julio \n 8=Agosto \n 9=Septiembre \n 10=Octubre \n 11=Noviembre \n 12=Diciembre");
printf ("\n Introduzca el mes del que desea saber su cantidad de dias (Supondremos que es un a�o no bisiesto)\n\n" ); 

scanf ("%i", &mes);  //guardamos dato mes

if (mes < 1 || mes > 12) //generamos condicion
printf ("El valor es incorrecto\n"); 
else //de ser contraria la condicion
{ 

--mes; 
correcto = 1; 

}
}
printf ("\nEl mes introducido tiene %i dias\n", dias[mes]); //generamos resultado
getchar(); //fin del programa 
}
