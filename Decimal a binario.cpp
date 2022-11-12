//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <stdio.h>
#include<iostream>
#include<cmath>


using namespace std;

int main(){
int num1;
int r;
int i;
int bin;

cout<<"\n\t\t*******************************************************"<<endl; 
cout<<"\t\t   CONVERTIR DE ENTERO DECIMAL A NUMERO BINARIO >257  "<<endl; 
cout<<"\t\t     ............................................  "<<endl;
cout<<"\n\t\t********************************************************"<<endl;

cout<< "\nDigite el Numero Entero Decimal"<<endl;
cin >> num1;
if (num1>0 & num1<257) {
r = num1;
i = 1;
bin = 0;
while (r!=1) {
bin = bin+(r%2)*i;
r = floor(r/2);
i = i*10;
}
bin = bin+(r%2)*i;
cout <<"\n                          :::::::::::::::"<<endl;
cout << "El Numero Binario es:     ::" << bin<< "    ::" << endl;
cout <<"                          :::::::::::::::"<<endl;

cout<<"\n\n\t\t\t*************************"<<endl; 
cout<<"\t\t\t   Programa Finalizado  "<<endl; 
cout<<"\t\t\t   ..Hasta Pronto..      "<<endl;
cout<<"\n\t\t\t*************************"<<endl;
}
}