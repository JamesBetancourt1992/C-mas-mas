//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include<iostream>

using namespace std;


int main() {
	float division;
	int menu;
	float multi;
	float n1;
	float n2;
	float resta;
	float salir;
	float suma;
	do {
		cout << "\t\t\t**********************************" << endl;
		cout << " \t\t\t        MENU DE OPERACIONES      " << endl;
		cout << "\t\t\t**********************************" << endl;
		
		cout << "\n1. Leer dos Numeros Enteros Positivos" << endl;
		cout << "2. Sumar los dos N�meros Ingresados" << endl;
		cout << "3. Restarle al Primer Numero el Segundo" << endl;
		cout << "4. Multiplicar los dos Numeros Ingresados" << endl;
		cout << "5. Dividir el Primer Numero dado por el segundo" << endl;
		cout << "6. Salir " << endl;
		cout << "\nElija Una Opcion" << endl;
		cin >> menu;
		cout << " \nDigite un numero " << endl;
		cin >> n1;
		cout << "\nDigite un segundo numero " << endl;
		cin >> n2;
		
		suma = n1+n2;
		resta = n1-n2;
		multi = n1*n2;
		division = n1/n2;
		salir = 6;
		
		switch (menu) {
		case 1:
			cout << "\nLos Numeros Ingresados son:" << endl;
			cout << " \nEl primer numero es " << n1 << endl;
			cout << " El segundo numero es " << n2 << endl;
			break;
		case 2:
			cout << "\nla suma de " << n1 << "+" << n2 << " es:" << endl;
			cout << "*********   " << suma << "   *********" << endl;
			break;
		case 3:
			if (n1>n2) {
				resta = n1-n2;
				cout << "\nla resta de " << n1 << "-" << n2 << " es: " << endl;
				cout << "**********   " << resta << "   *************" << endl;
			} else {
				cout << "\nError al  hacer operacion" << endl;
			}
			break;
		case 4:
			if (n1!=0 || n2!=0) {
				multi = n1*n2;
				cout << "\nla multiplicaci�n de " << n1 << "*" << n2 << ",es: " << endl;
				cout << " *************    " << multi << "    ***********" << endl;
			} else {
				cout << "\nError al  hacer operacion" << endl;
			}
			break;
		case 5:
			cout << "\nLa divisi�n de " << n1 << " por " << n2 << " es:" << endl;
			cout << "*********     " << division << "   **************" << endl;
			break;
		case 6:
			salir = 6;
			cout << "\n\t\t\t********************" << endl;
			cout << "\t\t\tPrograma Finalizado" << endl;
			cout << "\t\t\t....Hasta Pronto..." << endl;
			cout << "\t\t\t********************" << endl;
			break;
		}
	} while (salir!=6);
	return 0;
	
}

