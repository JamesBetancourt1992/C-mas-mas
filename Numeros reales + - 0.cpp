//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h> 

 int signo (float real) 
{ 
   int x; 
    
   if (real > 0) 
      x = 1; 
   if (real == 0) 
      x = 0;     
   if (real < 0) 
      x = -1; 
      
   return x; 
    
}   

int main() 
{ 
   float num; 
   while (num > -1000000) 
   { 
      printf("\nEscriba un numero real: "); 
      scanf("%f", &num); 
      printf("%d", signo(num)); 
   } 
   return 0; 
    
} 
