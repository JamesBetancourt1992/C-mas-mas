//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h>

using namespace std;
 
int main(){
       int a, b; //definimos las variables
	     
	   printf("Programa entre dos numeros mayor y menor \n"); //inicio de programa
       printf("Ingrese primer numero \n"); //solicitamos variable a
	   scanf ("%d",&a); //guardamos variable a
	   printf("Ingrese segundo numero \n"); //solicitamos variable b
	   scanf ("%d",&b);	//guardamos la variable b   
	   if (a > b ) //realizamos operacion 
	   {  
	   printf("el primer digito es mayor que el segundo\n "); //imprimimos resultado 
	}
	 else
	 {
	 if(a < b) //de ser contraria la operacion anterior
	 printf("El primer digito es menor que el segundo\n "); //imprimos resultado de la nueva operacion 
     else
    printf ("los numeros son iguales"); //se imprimira en pantalla de no ser ninguna operacion anterior
}
 
	return (0); //fin del programa 
}

