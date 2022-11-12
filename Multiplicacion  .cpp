//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h>

using namespace std;

int main(void)
{
int X, Y, resultado; ; // variables en las que se va a trabajar el programa.
	     
printf("Programa que muestra el resultado de multiplicar dos numeros diferentes a cero \n"); //Detalles sobre el programa que se est� trabajando.
printf("Digita el primer numero \n"); // Aqui se ingresa el primer n�mero solicitado.
scanf ("%d",&X); // El programa analiza el n�mero ingresado.
	   
if (X == 0) // Si se llega a ingresar valor cero, el programa selecciona esta opci�n.
{  
	   printf("El producto de cero por cualquier numero es cero\n "); // El programa muestra este mensaje si se ingresa el valor cero.
	  
	   return (0);
}
else // De lo contrario el programa continua trabajando sin problema.
{
	 if(X!= 0) // Si x es diferente a cero, entonces el programa continua su proceso.
	 printf("Digita el segundo numero \n"); // aqu� se ingresa el segundo n�mero solicitado.
	 scanf ("%d",&Y); // El programa analiza el segundo n�mero ingresado.
	 resultado = (X*Y); // El programa ejecuta la multiplicaci�n de ambos n�meros.
	 printf("El resultado de la multiplicacion es: %d ",resultado); // En pantalla, el programa muestra el resultado de la multiplicaci�n.
}

return (0);
}
