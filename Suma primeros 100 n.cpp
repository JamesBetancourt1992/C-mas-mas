//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include<iostream>
using namespace std;


int main() {
	float i;
	float num;
	float rta;
	float s;
	float suma;
	num = 100;
	suma = 1;
	
	cout<<"\t\t\t________________________________________"<<endl;
	cout<<"\t\t\t...SUMA DE LOS 100 PRIMEROS NUMEROS..."<<endl;
	cout<<"\t\t\t========================================"<<endl;
	for (i=1;i<=num;i++) {
		suma = num+1;
		cout << "El valor de i mas " << i << " suma " << suma << endl;
	}
	while (num<=100) {
		suma = suma+num;
		num = num+1;
	}
	cout<< "\nAl sumar los 100 primeros numeros entre si da:  " << num << endl;
	s = 100/2;
	rta = s*101;
	cout<<"\n                                                   :::::::::::::::::::" << endl;
	cout<<"El valor de la Suma de los Primeros 100 Numeros es: ::      "<< rta << "   ::  " << endl;
	cout<<"                                                   :::::::::::::::::::" << endl;
	
	cout<<"\n\t\t\t*************************"<<endl;
	cout<<"\t\t\t    Programa Finalizado "<<endl;
	cout<<"\t\t\t     ..Hasta Pronto.."<<endl;
	cout<<"\t\t\t*************************"<<endl;
	
	return 0;
}

