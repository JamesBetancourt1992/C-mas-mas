//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 

#include <stdio.h>

using namespace std;

int main(){
       float base , altura , Area; //definimos variables
	     
	   printf("Programa para calcular el Area de un rectangulo \n");  //imprimimos en pantalla
       printf("Ingrese la base del rectangulo \n"); //Solicitamos dato base al usuario
	   scanf ("%f",&base); //guardamos valor de la base
	   printf("Ingrese la altura del rectangulo \n");  //Solicitamos dato de altura al usuario
	   scanf ("%f",&altura); //guardamos valor de la altura
	   Area = (altura * base); //multiplicamos los valores para generar Area
	   printf ("El Area del rectangulo es: %f \n",Area); //Guardamos valor de Area
	   printf("recuerde que el area de las figuras trigonometricas debe ser resuelto elevado a la 2"); //Imprimos respuesta en pantalla
    
     return 0; //fin del codigo
}
