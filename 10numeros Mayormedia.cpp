//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h> //definimos libreria
 
 int main()

 {
    int i;
      float numeros[10], media, desviacion,suma; // Variables a utilizar
     printf("\n Digite Diez Numeros:\n\n");// Escriba los numeros
      for (i=0; i<10; i++)// Resultado de los numeros
          {scanf("%g", &numeros[i]);// verificacion de resultados
           suma += numeros[i];} // Suma de los numeros
           media = suma/10; // Promedio de la suma de los numeros
           printf("\n La media es:%g", media); // Resultado del promedio
           printf("\n\n Los numeros que estan por encima de la media son: "); // Numeros que estan por encima del promedio
           for (i=0; i<10; i++) // Resultado de los numeros
           {
                desviacion=(numeros[i]-media);
                if (desviacion > 0)
                     printf(" %g ", numeros[i]);
           }
    getchar(); // Realiza pausa ver datos   
    return 0; //Pausa del sistema

}
