//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 

#include <stdio.h>

using namespace std;

int main(){
       float c , f , k; //definimos variables
	     
	   printf("Programa para convertir celsius en farenheit y kelvin \n"); //inicio del programa
	    printf("Celsius=c \nFarenheit=f \nKelvin=k \n"); //imprimimos datos iniciales
       printf("Ingrese temperatura en celsius \n"); //solicitamos temperatura 
	   scanf ("%f",&c); //guardamos variable temperatura
	   f = ((9 * c)/5)+32; //hallamos variable f
	   printf ("La conversi�n a farenheit es: %f \n",f); //imprimimos variable f
       k = (273.15 + c); //hallamos varible k
	   printf ("La conversi�n a Kelvin es: %f \n",k); //definimos variable k
     return 0; //fin del programa
}
