//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h> 

main() 
{
int i; //creamos variable i
float numeros[10]; //generamos array
printf("\n Digite 10 numeros: \n"); //solicitamos datos 
for(i=0; i<10; i++)//creamos el ciclo
scanf("%g", &numeros[i]); //guardamos los datos ingresados
printf("\n El orden inverso de los numeros es: \n"); //Imprimimos texto en pantalla
for (i=9; i>=0; i--)//validamos ciclo
printf("%g \n",numeros[i]);//generamos resultados
getchar();
}
