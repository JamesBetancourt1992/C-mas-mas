//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h> 
main() 

{ 
    int i, media=1, suma=0, tabla[10]; 
    printf("\nEscriba Diez numeros\n"); 
    for (i=0; i<=9; i++) 
         scanf("%d", &tabla[i]); 
         for (i=0; i<=9; i++) 
              {suma+=tabla[i]; 
              
              
              media=(suma/10);} 
         printf("\n\n...La media es: %d", media); 
           printf("\nLos numeros por encima de la media son: "); 
              for (i=0; i<=9; i++){
              	if (tabla[i] > media){
              
                   printf(" %d  " , tabla[i] );     
            
              getchar(); 
              getchar(); 
            }        
          }          
} 
