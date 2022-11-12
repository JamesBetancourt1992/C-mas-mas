//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h>
#include <stdlib.h>
 
int MenorNumero (int n1, int n2){ //definimos las variables
int menor; //definimos variable menor
if (n1<n2){ //agragamos la condicion 
menor=n1; //Igualamos la variable menor
}else{if (n2<n1){ //definimos la condicion 
menor=n2; //igualamos la variable menor 
}else{
printf("Los n\243meros son IGUALES \n"); //Imprimimos en pantalla la igual de los numeros
menor=n1; //igualamos la variable menor
}
}
return menor;
}

int main(void) 
{
int num1, num2, MENOR; //definimos las variables
printf("Ingresar DOS n\243meros DIFERENTES\n"); //inicio de programa
printf("Ingrese el primer n\243mero \n"); //solicitamos el dato num1
scanf("%d",&num1); //guardamos la variable num1
printf("Ingrese el segundo n\243mero \n"); //solicitamos el dato num2
scanf("%d",&num2); //guardamos la variable num2

MENOR = MenorNumero(num1, num2); /*SE LLAMA A LA FUNCI�N*/
printf("El MENOR n\243mero es: %d\n",MENOR); //imprimimos en pantalla el valor menor
system ("pause");
return 0; //fin del programa
}
