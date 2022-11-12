//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include<iostream>
#include<cstdlib>
#define SIN_TIPO string

using namespace std;


int main() {
	int acomulado3;
	float acomulado1;
	float acomulado2;
	SIN_TIPO jugador1;
	SIN_TIPO jugador2;
	float n1;
	float n2;
	int num1;
	int num2;
	float puntos;
	string respuesta;
	cout<< "\t\t\t****************************************" << endl;
	cout << "\n\t\t\t  ...Bienvenidos al juego Dados...." << endl;
    cout<< "\n\t\t\t****************************************" << endl;
	cout << "\nIngrese el Nombre del Jugador 1" << endl;
	cin >> jugador1;
	cout << "\nIngrese el Nombre del Jugador 2" << endl;
	cin >> jugador2;
	cout << "\nIngrese El valor de la Apuesta por jugador" << endl;
	cin >> num1;
	cin >> num2;
	
	acomulado3 = num1+num2;
	
	cout << "\nEl Acomulado es:" << acomulado3 << endl;
	puntos = 500;
	do {
		n1 = (rand()%6)+1;
		n2 = (rand()%6)+1;
		cout << "\nEl dado uno cayo en:" << n1 << endl;
		cout << "\nEl dado dos cayo en:" << n2 << endl;
		if (n1>n2) {
			cout << "\n10 puntos para el jugador 1: " << puntos << " Acomulados" << endl;
			acomulado1 = num1+puntos;
			cout << "\nEn total tienes: " << acomulado1 << "Para que sigas Apostando" << endl;
		} else {
			cout << "\nperdiste 10 puntos jugador 1: " << -puntos << " Acomulados" << endl;
			acomulado1 = num1-puntos;
			cout << "\nEn total tienes: " << acomulado1 << "Para que sigas Apostando" << endl;
		}
		if (n2>n1) {
			cout << "\n10 puntos para el jugador 2: " << puntos << " Acomulados" << endl;
			acomulado2 = num2+puntos;
			cout << "\nEn total tienes: " << acomulado2 << "Para que sigas Apostando" << endl;
		} else {
			cout << "\nperdiste 10 puntos jugador 2: " << -puntos << " Acomulados" << endl;
			acomulado2 = num2-puntos;
			cout << "En total tienes: " << acomulado2 << "Para que sigas Apostando" << endl;
		}
		if (n1==n2) {
			cout << "\nlanzar dados nuevamente hay empate " << endl;
		}
		cout << "\nDesea Continuar? SI/N0" << endl;
		cin >> respuesta;
	} while (respuesta!="NO");
	
    cout << "\n******************************" << endl;
	cout << "\n\tJUEGO TERMINADO" << endl;
    cout << "   ....Hasta Pronto...." << endl;
    cout << "\n******************************" << endl;
	return 0;
	
}

