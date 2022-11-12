//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 

#include <stdio.h>
 
int main()
{ 
int num[10];
int i;
int mayor=0;
 
for (i=0; i<10; i++){
   printf( "ingrese 10 numeros enteros/n");
   printf( "Numero %d\n", i+1);
   scanf("%d", & num[i]);
}
 
 
for (i=0; i<10; i++){
    if (num[i]> mayor){
    mayor=num[i];
    }
}
printf("El mayor numero es %d\n", mayor);
}
