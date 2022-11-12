//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include<iostream>
using namespace std;


int main() {
	float cl;
	float clave;
	float intentos;
	
	cout << "\t\t\t...VALIDAR CLAVE..." << endl;
	cout << "\t\t________***______________***__________" << endl;
	cout << "\t\t  ___________________________________" << endl;
	cout << "\nIngrese Su Clave recuerde son 5 Digitos" << endl;
	cin >> clave;
	intentos = 3;
	cl = 7422;
	while (clave!=cl && intentos>0) {
		if (clave>cl) {
			cout << "\nLa Clave No es Correcta Corrijala" << endl;
		}
		if (clave<cl) {
			cout << "\nLa Clave No es Correcta Corrijala" << endl;
		}
		cout << "Vuelva a Intentarlo " << intentos << endl;
		cin >> clave;
		intentos = intentos-1;
		if (clave==cl) {
			cout << "\nLa Clave es Correcta" << endl;
		    cout << "\n\t\t         Ingresando...." << endl;
		}
		if (intentos==0) {
			cout << "\nLa ha Sido Cuenta Bloqueada" << endl;
		}
		
	}
	    cout << "\n\n\t\t________***______________***__________" << endl;
		cout << "\n\t\t        Programa Finalizado" << endl;
		cout << "\t\t________***______________***__________" << endl;
	return 0;
}

