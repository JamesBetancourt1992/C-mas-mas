//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int bin;
	int c;
	int dec;
	int i;
	int num;
	int num1;
	int oct;
	int operaciones;
	int r;
	int res;
	string rta;
    cout << "\t  ..Programa Conversor de Decimales, Octales Y Binarios.." << endl;
 	cout << "\t___________..._______________________..._______________________" << endl;
	cout << " \n\t\t\t  ..Menu de Opciones..  " << endl;
	cout << "\t\t\t___________...___________\n" << endl;
	cout << "1. Convertir de Decimal a Binario" << endl;
	cout << "2. Convertir de Decimal a Octal" << endl;
	cout << "3. Convertir de  Binario a Decimal" << endl;
	cout << "4. Salir" << endl;
	cin >> operaciones;
	do {
		if (operaciones==1) {
			cout << "\nDigite el Numero Decimal" << endl;
			cin >> num1;
			if (num1>0) {
				r = num1;
				i = 1;
				bin = 0;
				while (r!=1) {
					bin = bin+(r%2)*i;
					r = floor(r/2);
					i = i*10;
				}
				bin = bin+(r%2)*i;
				cout << "\nEl Numero Binario es: " << bin << endl;
			}
		}
		if (operaciones==2) {
			cout << "\nDigite el Numero Decimal" << endl;
			cin >> dec;
			oct = 0;
			i = 0;
			do {
				r = dec%8;
				oct = oct+pow(10,i)*r;
				i = i+1;
				dec = dec/8;
			} while (dec>=8);
			res = oct+pow(10,i)*dec;
			cout << "\nEl Numero Octal es: " << res << endl;
		}
		if (operaciones==3) {
			cout << "\nDigite El Numero Binario" << endl;
			cin >> num;
			if (num>0) {
				c = num;
				r = 1;
				dec = 0;
				while (c!=1) {
					dec = dec+(c%10)*r;
					c = floor(c/10);
					r = r*2;
				}
				dec = dec+((c%10)*r);
				cout << "\nEl Numero Decimal es: " << dec << endl;
			}
		}
		cout << "\nDesea seguir calculando? si/ no" << endl;
		cin >> rta;
	} while (rta!="no");
	
	cout<<"\t\t\t****************************"<<endl;
	cout<<"\t\t\t    Programa Finalizado"<<endl;
	cout<<"\t\t\t      ..Hasta Pronto.."<<endl;
	cout<<"\t\t\t*****************************"<<endl;
	
	return 0;
}

