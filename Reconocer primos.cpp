//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
long Num,divisor=2; 

cout<<"\t\t\t**********************"<<endl;
cout<<"\t\t\t   ..Numeros Primos..  "<<endl;
cout<<"\t\t\t**********************"<<endl;

printf(" Digite Un Numero:");
scanf("%ld",&Num);

while(divisor<Num)
	
{ 
while( Num % divisor != 0)
divisor=divisor+1;

if(Num== divisor) 
	
printf("\n %ld es un Numero Primo ",Num); 

else
printf("\n%ld NO es Numero Primo  ",Num,divisor);

cout<<"\n\n\t\t\t**********************"<<endl;
cout<<"\t\t\t   Programa Finalizado  "<<endl;
cout<<"\t\t\t   ..Hasta Pronto..  "<<endl;
cout<<"\t\t\t**********************"<<endl;

break;

}

}