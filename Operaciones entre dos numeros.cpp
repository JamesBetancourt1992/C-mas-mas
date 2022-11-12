//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 

#include <stdio.h>

using namespace std;

int main(){
       float a , b , suma, resta, multiplicacion, division;
	     
	   printf("Programa de operaciones entre dos numeros \n");
       printf("Ingrese primer numero \n");
	   scanf ("%f",&a);
	   printf("Ingrese segundo numero \n");
	   scanf ("%f",&b);
	   suma = a + b;
	   printf ("La suma es: %f \n",suma);
	    resta = a - b;
	   printf ("La resta es: %f \n",resta);
	    multiplicacion = a * b;
	   printf ("La multiplicacion es: %f \n",multiplicacion);
	    division = a / b;
	   printf ("La division es: %f \n",division);
     return 0;
}
