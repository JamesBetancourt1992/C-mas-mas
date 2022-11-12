//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

int main() 
{
float suma=0;
float ac;
float i=0;
int n;
float I;
int edad;
int titulado;
int exp;
int APIRANTES[50];
ac=0;
i=0;

cout<<"\t\t\t__________:::::::::__________"<<endl;
cout<<"\t\t\t  ..SELECCION DE PERSONAL.."<<endl;
cout<<"\t\t\t__________:::::::::__________"<<endl;

cout<<"\nPor favor Ingrese La Cantidad de Aspirantes  a Entrvistar"<<endl;
cin>>n;

cout<<"\nRecuerde En caso De que Su Respuesta sea:"<<endl;
cout<<" SI Marque 1"<<endl;
cout<<" NO Marque 2"<<endl;

for (i=1;i<=n;i++) {
cout<<"\nBienvenido Aspirante"<<i<<endl;
cout<<" Es mayor de Edad ?"<<endl;
cout<<"1.Si 2.No"<<endl;
cin>>edad;

cout<<"\nEs Ingeniero Titulado?"<<endl;
cout<<"1.Si 2.No"<<endl;
cin>>titulado;

cout<<"\ntiene Experiencia Laboral?"<<endl;
cout<<"1.Si 2.No"<<endl;
cin>>exp;

if (edad==1 && titulado==1 && exp==1) {
ac=suma+i;
}
}
cout<<"\n:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
cout<<"::  El numero de Aspirantes Aceptados es:"<<ac<<" ::"<<endl;
cout<<":::::::::::::::::::::::::::::::::::::::::::::"<<endl;

cout<<"\n\t\t\t************************"<<endl;
cout<<"\t\t\t  Programa Finalizado "<<endl;
cout<<"\t\t\t  ..Hasta Pronto.. "<<endl;
cout<<"\t\t\t*************************"<<endl;

system("pause");

return 0;
}
