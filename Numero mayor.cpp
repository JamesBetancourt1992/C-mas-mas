//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h> 

main() 
{ 
      int i, mayor=0, numeros[10]; //definimos variables y array
      
      printf("\n Escriba diez numeros:\n\n"); //solicitamos datos
      for (i=0; i<10; i++) //generamos ciclo
           scanf("%d", &numeros[i]); //guardamos datos
           for (i=0; i<10; i++) //validamos ciclo
                mayor = mayor>numeros[i]? mayor: numeros[i]; //definimos variable mayor
      printf("\n El mayor de los numeros es: %d", mayor); //imprimimos el resultado en pantalla
      getchar(); //fin del programa
  }
