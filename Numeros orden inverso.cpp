//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 

#include <stdio.h> 
main() 


{ 
     int i; 
     float reales[10]; 
     printf("\n Escriba Diez numeros reales:\n\n"); 
     for (i=0; i<10; i++) 
          scanf("%f", &reales[i]); 
          printf("\n Los numeros, en orden inverso\n"); 
          printf(" al que fueron introducidos, son: "); 
          for (i=10; i>=0; i--) 
               printf("\n\n %.2f", reales[i]); 
     getchar(); 
     getchar(); 
} 
