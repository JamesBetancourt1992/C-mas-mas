//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;
int a;
int b;
int c;

int main() {
	
cout<<"\t\t\t************************************"<<endl;
cout<<"\t\t\t          TIPOS DE TRIANGULOS"<<endl;
cout<<"\t\t\t************************************"<<endl;

	
cout<<"Digite el lado A del Triangulo"<<endl;
cin>>a;

cout<<"Digite el lado B del Triangulo"<<endl;
cin>>b;
	
cout<<"Digite el Lado C del Triangulo"<<endl;
cin>>c;

if (a==b && b==c) {
cout<<"\n\t\t\t========================"<<endl;
cout<<"\t\t\t Triangulo Equilatero"<<endl;
cout<<"\n\t\t\t========================"<<endl;
} 
else 
{
if (a==b || b==c || a==c) {	
cout<<"\n\t\t\t========================"<<endl;
cout<<"\t\t\t Triangulo Isoceles"<<endl;
cout<<"\n\t\t\t========================"<<endl;
} 
else {
cout<<"\n\t\t\t========================"<<endl;
cout<<"\t\t\t Triangulo Escaleno"<<endl;
cout<<"\n\t\t\t========================"<<endl;
}
}
cout<<"\t\t\t****************************"<<endl;
cout<<"\t\t\t  Programa Finalizado"<<endl;
cout<<"\t\t\t  ..Hasta Pronto.."<<endl;
cout<<"\t\t\t*****************************"<<endl;

system("pause");	
return 0;
}
