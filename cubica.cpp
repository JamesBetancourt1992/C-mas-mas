//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h> //inclumos libreria

float cubica(float num) //creamos la funcion
{ 
  float cubica; //definimos la variable cubica
  cubica = num * num* num; //realizamos la operacion 
  return cubica; //regresamos 
}                             

int main() //inicio del programa
{ 
  float num; //definimos variables
  float cubo; 
  int i=0; 
  
  while(num >= -1000000)  //generamos un rangop de la variable
  { 
     if(i==0) //aplicamos las condiciones
        printf("Digite un numero real\n"); //solicitamos la variable num 
     else 
        printf("Digite el otro numero real\n"); 
     scanf("%f", &num); //guardamos la variable num
     printf("%f elevado al cubo es %f\n", //imprimimos en pantalla resultado
    
        num,cubo=cubica(num)); //comprobamos la funcion 
     i ++; 
  } 
  return 0; //fin del programa
} 
