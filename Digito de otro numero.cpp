//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h>

using namespace std;
 
int main(){
       int a, b; //definimos variables
	     
	   printf("Programa entre dos numeros mayor y menor \n"); //inicio de programa
       printf("Ingrese primer numero \n"); //solicitamos variable a
	   scanf ("%d",&a); //guardamos variable a
	   printf("Ingrese segundo numero \n"); //solicitamos variable b
	   scanf ("%d",&b);	 //guardamos variable b
	   if (a % b == 0) //realizamos operacion 
	   {  
	   printf("el primer digito es multiplo del segundo\n "); //imprimimos la respuesta
	}
	 else
	 {
	 if(a % b != 0) //realizamos segunda operacion de no cumplirse la primera
	 
	 printf("El primer digito no es multiplo del segundo\n "); //imprimimos respuesta de la segunda operacion 

}
	return (0); //fin del programa 
}
