//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include<iostream>
#include<cmath>

using namespace std;


int main() {
	int centenas;
	int decenas;
	int decimal;
	int unidades;
	int unimil;
	bool validar;
    string resultado;
	string romanos[10][4];
	
	romanos[0][0] = "";
	romanos[0][1] = "";
	romanos[0][2] = "";
	romanos[0][3] = "";
	romanos[1][0] = "I";
	romanos[1][1] = "X";
	romanos[1][2] = "C";
	romanos[1][3] = "M";
	romanos[2][0] = "II";
	romanos[2][1] = "XX";
	romanos[2][2] = "CC";
	romanos[2][3] = "MM";
	romanos[3][0] = "III";
	romanos[3][1] = "XXX";
	romanos[3][2] = "CCC";
	romanos[3][3] = "MMM";
	romanos[4][0] = "IV";
	romanos[4][1] = "XL";
	romanos[4][2] = "CD";
	romanos[4][3] = "IV@";
	
	cout<<"\t\t\t_______________________________________"<<endl;
	cout<<"\t\t\t ��� Convertir N� Decimal a Romano ���"<<endl;
	cout<<"\t\t\t======================================="<<endl;
	
	cout << "Digite un Numero Decimal del 1 al 5000" << endl;
	cin >> decimal;
	if (decimal>0 && decimal<5000) {
		validar = true;
	} else {
		validar = false;
	}
	if (validar==true) {
		unimil = floor(decimal/1000%10);
		centenas = floor(decimal/100%10);
		decenas = floor(decimal/10%10);
		unidades = decimal%10;
		resultado = resultado;
		if (unimil!=0) {
			resultado = resultado+romanos[unimil][3];
		}
		if (centenas!=0) {
			resultado = resultado+romanos[centenas][2];
		}
		if (decenas!=0) {
			resultado = resultado+romanos[decenas][1];
		}
		if (unidades!=0) {
			resultado = resultado+romanos[unidades][0];
		}
		cout << "\nNumero Decimal Digitado: " << decimal << endl;
		cout << "\n                       :::::::::::::::::::::::::" << endl;
		cout << "\Convertido en  Romano: ::        "   <<  resultado <<       "            ::  " << endl;
		cout << "                       :::::::::::::::::::::::::" << endl;
		
		cout<< "\n\n\n\t\t\t*************************" << endl;
		cout<< "\t\t\t   Programa Finalizado"<<endl; 
		cout<<"\t\t\t    ..Hasta Pronto.." << endl;
		cout<< "\t\t\t*************************" << endl;
	} else {
		cout << "\nEl numero Digitado No se Encuentra... Esta por encima de 5000" << endl;
		
		cout<< "\n\n\n\t\t\t*************************" << endl;
		cout<< "\t\t\t   Programa Finalizado"<<endl; 
		cout<<"\t\t\t    ..Hasta Pronto.." << endl;
		cout<< "\t\t\t*************************" << endl;
	}
	return 0;
}

