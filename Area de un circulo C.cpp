//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 

#include <stdio.h>

using namespace std;
 
int main(){
       float radio , Area; //definimos variables
	     
	   printf("Programa para calcular el Area de un circulo \n"); //inicio de programa
       printf("Ingrese el radio del circulo \n"); //solicitamos radio del circulo
	   scanf ("%f",&radio); //guardamos variable radio
	   Area = 3.1416 * (radio * radio); //realizamos la operacion del area del circulo
	   printf ("El Area del circulo es: %f \n",Area); //imprimimos resultado 
    
     return 0; //fin del programa
	
}
