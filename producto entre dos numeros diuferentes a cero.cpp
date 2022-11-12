//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h>

using namespace std;
 
int main(){
       int a, b, producto; //definimos variables
	     
	   printf("Programa producto entre dos numeros diferentes a cero \n"); //inicio de programa 
       printf("Ingrese primer numero \n"); //solicitamos primer dato
	   scanf ("%d",&a); //guardamos variable a
	   if (a == 0) //realizamos operacion 
	    {  
	   printf("el producto de cero por cualquier numero es cero\n "); //imprimimos el resultado cuando es cero
	   return (0);
	}
	  else
	 {
	 if(a != 0) //de ser diferente realizamos la siguiente operacion
	 printf("Ingrese segundo numero \n"); //Solicitamos segundo dato
	 scanf ("%d",&b); //guardamos variable b
	 producto = (a * b); //realizamos operacion producto entre las variables
	 printf("El producto entre ambos numeros es: %d ",producto); //imprimimos resultado del producto

}
	return (0); //fin del programa
}
	  

