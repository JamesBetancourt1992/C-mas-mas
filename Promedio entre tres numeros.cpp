//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 

#include <stdio.h>

using namespace std;
 
int main(){
       float a , b , c, promedio; //definimos variables
	     
	   printf("Programa promedio entre tres numeros \n"); //inicio de programa
       printf("Ingrese primer numero \n"); //solicitamos variable a
	   scanf ("%f",&a); //guardamos variable a
	   printf("Ingrese segundo numero \n"); //solicitamos variable b
	   scanf ("%f",&b); //guardamos variable b
	   printf("Ingrese tercer numero \n"); //solicitamos variable c
	   scanf ("%f",&c); //guardamos variable c
	   promedio = (a + b + c)/3; //realizamos la operacion
	    printf ("el promedio entres los tres numeros es: %f \n",promedio); //imprimimos el resultado
     return 0; //fin del programa
}
