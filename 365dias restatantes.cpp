//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
 #include <stdio.h> //incluimos librerias

 main() 
 { 
     int i=0, d=0, m=0, suma; //definimos variables
     int mes[12]={31,28,31,30,31,30,31,31,30,31,30,31}; //definimos el array
     printf ("\n 1=Enero \n 2=Febrero \n 3=Marzo \n 4=Abril \n 5=Mayo \n 6=Junio \n 7=Julio \n 8=Agosto \n 9=Septiembre \n 10=Octubre \n 11=Noviembre \n 12=Diciembre");
     printf("\n\n Escriba el numero del mes\n"); //solicitamos al usuario los datos
     scanf("%d", &m); //guardamos el mes
     for(i=0; i<m; ++i)   //definimos el ciclo          
         suma += mes[i-1]; //agregamos los datos a la variable suma
     printf(" Escriba el dia\n"); //se solicita el dia
     scanf("%d", &d); //guardamos el dia
     suma += d; //agregamos datos de dia a la variable suma
	 if (suma < 1 || suma > 366) //generamos condicion
	 printf ("El valor es incorrecto\n");
     else //de ser contraria la condicion se genera la suma
     printf(" Quedan %d del ano para terminar el a�o \n", -suma+366);
     getchar(); 
 }    
