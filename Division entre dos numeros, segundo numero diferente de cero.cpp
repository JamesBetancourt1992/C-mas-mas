//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h>

using namespace std;
 
int main(){
       int a, b; //definimos variables
	   long producto; //definimos variable producto
	   printf("Programa producto entre dos numeros diferentes a cero \n"); //inicio de programa 
       printf("Ingrese primer numero \n"); //solicitamos variable a
	   scanf ("%d",&a); //guardamos variable a
	   printf("Ingrese segundo numero \n"); //solicitamos variable b
	   scanf ("%d",&b); //guardamos variable b
	   if (b == 0) //realizamos operacion 
	    {  
	   printf("Error: No se puede dividir entre cero \n "); //imprimimos el resultado cuando se genera error
	   return (0); 
	}
	  else
	 {
	 if(b != 0) //generamos segunda operacion 
	 
	 producto = (a / b); //resolvemos la division 
	 printf("La division del primer digito en el segundo es: %d ",producto); //imprimimos el resultado 

}
	return (0); //fin del programa
}
	 
