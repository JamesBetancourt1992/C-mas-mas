//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	float adivinar;
	float num;
	float turnos;
	adivinar = (rand()%1000)+1;
	num = 0;
	turnos = 5;
    cout << "\t\t_______...____________________...___________" << endl;
	cout << "\t\t\t.......ADIVINA EL NUMERO....." << endl;
	cout << "\t\t_______...____________________...___________" << endl;
	cout << "\t\t_______...____________________...___________" << endl;
	cout << "\nNivel 1" << endl;
	cout << "digite un numero del 1 al 1000: " << endl;
	cin >> num;
	while (num!=adivinar && turnos>0) {
		if (num>adivinar) {
			cout << "caliente" << endl;
		} else {
			cout << "frio" << endl;
		}
		cout << "\n-------------------------------------" << endl;
		cout << "\n\tVuelve a intentar" << turnos << endl;
		cout << "\n-------------------------------------" << endl;
		cin >> num;
		turnos = turnos;
	}
	if (adivinar==adivinar) {
		cout << "\n//////*//*////////////*//*//////////////////" << endl;
		cout << "\n\tGanaste Felicitaciones avanza" << endl;
		cout << "\n//////*//*////////////*//*//////////////////" << endl;
	}
	cout << "Nivel 2" << endl;
	cout << "digite un numero del 1 al 1000: " << endl;
	cin >> num;
	while (num!=adivinar && turnos>0) {
		if (num>adivinar) {
			cout << "cerca" << endl;
		} else {
			cout << "lejos" << endl;
		}
		cout << "te quedan" << turnos << " oportunidades" << endl;
		cin >> num;
		turnos = turnos-1;
	}
	if (turnos==0) {
		cout << "\n--------------------------------------------------------" << endl;
		cout << "\n\t\tPerdiste El Numero Correcto era: " << adivinar << endl;
		cout << "\n--------------------------------------------------------" << endl;
	} else {
		cout << "\n\t//*//*//*//*//*//*//*//*//*//*//*//*//*//*/*//*//*//" << endl;
		cout << "\n\t\t  Ganaste Felicitaciones" << endl;
		cout << "\n\t//*//*//*//*//*//*//*//*//*//*//*//*//*//*/*//*//*//" << endl;
	}
	    cout << "\n\t\t//*//***************/*//*//" << endl;
		cout << "\t\t    Programa Finalizado" << endl;
		cout << "\t\t     ..Hasta Pronto.." << endl;
		cout << " \t\t//*//***************/*//*//" << endl;
	return 0;
}

