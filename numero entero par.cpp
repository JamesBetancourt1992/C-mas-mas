//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h>

using namespace std;
 
int main(){
       int x; //definimos variables
	     
	   printf("Programa saber si un numero es entero es par \n"); //inicio programa
       printf("Ingrese el numero a calcular \n"); //solicitamos dato a calcular
	   scanf ("%d",&x); //guardamos la variable
	   if (x%2 == 0) //realizamos la operacion 
	   printf("el numero entero es par \n"); //imprimimos el resultado
	   else 
	   printf("El numero entero no es par\n "); //de ser contrario se imprimira este resultado
    
     return 0; //fin del programa
}
