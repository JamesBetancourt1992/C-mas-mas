//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h> //incluimos la libreria

 int signo (float real) //generamos la funcion
{ 
   int x; //definimos la variable x
    
   if (real > 0) //aplicamos las condiciones, en este caso positiva
      x = 1; 
   if (real == 0) //aplicamos las condiciones, en este caso cero
      x = 0;     
   if (real < 0) //aplicamos las condiciones, en este caso negativa
      x = -1; 
      
   return x; //fin de la funcion
    
}   

int main() //inicio del programa
{ 
   float num; //definimos variable 
   while (num > -1000000) //creamos un rango para nuestra variable
   { 
      printf("\nEscriba un numero real: "); //solicitamos la variable al usduario 
      scanf("%f", &num); //guardamos la variable num
      printf("%d", signo(num)); //llamamos la funcion 
   } 
   return 0; //fin del programa
    
} 

