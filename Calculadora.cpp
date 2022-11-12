//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include<iostream>
using namespace std;


int main() {
	float num1;
	float num2;
	int operaciones;
	float rta;
    cout << "\t\t\t*-*/*+*-*/*+*-*/*+*-*/*+*-*/-*/*+*-*/" << endl;
	cout << "\n\t\t\t     ..CALCULADORA BASICA.." << endl;
	cout << "\n\t\t\t*-*/*+*-*/*+*-*/*+*-*/*+*-*/-*/*+*-*/" << endl;
	cout << "\nDigita un numero 1" << endl;
	cin >> num1;
	cout << "\nDigita un numero 2" << endl;
	cin >> num2;
	cout << "\nseleccione una de las siguientes opciones" << endl;
	cout << "\n1. SUMAR" << endl;
	cout << "2. RESTAR" << endl;
	cout << "3. MULTIPLICAR" << endl;
	cout << "4.DIVIDIR" << endl;
	cin >> operaciones;
	switch (operaciones) {
	case 1:
		rta = num1+num2;
		break;
	case 2:
		rta = num1-num2;
		break;
	case 3:
		rta = num1*num2;
		break;
	case 4:
		rta = num1/num2;
		break;
	}
	cout << " ====================================== " <<endl;
	cout << "\n\tEl resultado es: " << rta << endl;
	cout << "\n====================================== " <<endl;
    cout << "\n\t\t************************* " <<endl;
	cout << "\t\t   Programa finalizado"  << endl;
	cout << "\t\t    ..Hasta Pronto.."  << endl;
	cout << "\t\t************************ " <<endl;
	
	return 0;
}

