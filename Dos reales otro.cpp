//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h>
#include <stdlib.h>

/*SE INICIA CON LA CONFIGURACI�N DE LA FUNCI�N*/

int MenorNumero (int n1, int n2){
int menor;
if (n1<n2){
menor=n1;
}else{if (n2<n1){
menor=n2;
}else{
printf("Los n\243meros son IGUALES \n");
menor=n1;
}
}
return menor;
}

int main(void)
{
int num1, num2, MENOR;
printf("Ingresar DOS n\243meros DIFERENTES\n");
printf("Ingrese el primer n\243mero \n");
scanf("%d",&num1);
printf("Ingrese el segundo n\243mero \n");
scanf("%d",&num2);

MENOR = MenorNumero(num1, num2); /*SE LLAMA A LA FUNCI�N*/
printf("El MENOR n\243mero es: %d\n",MENOR);
system ("pause");
return 0;
}
