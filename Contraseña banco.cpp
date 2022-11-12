//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
#include <string.H>

using namespace std;

int main() 
{
 
 int num;
 char cont[100];
 
 Ingresar:
 cout<<"\t\t\t..Banco ------ Sistema de Contrase�as.."<<endl;
 cout<<"\nDigite la clave recuerde cuatro digitos: "<<endl; 
 cin >> num;
 
 itoa (num,cont,10);
 int lcont = strlen(cont);
 
 if (lcont==4) 
 {
 
 int n1 = num/1000;
 int n2 = num/100 - n1*10;
 int n3 = num/10 - (n1*100 + n2*10);
 int n4 = num - (n1*1000 + n2*100 + n3*10);
 
 int crip = n4*1000 + n3*100 + n2*10 + n1;
 
 cout << "La clave sera guardara como: " << crip <<endl;
}
 else
 {
     cout <<endl<<"incorrecto!..La clave debe tener de 4 digitos.."<<endl;
     goto Ingresar;
     
    system("pause");
    
 }

 
 cin.get();
 cin.get();
 
    cout<<"\n\t\t*************************************"<<endl;
	cout<<"\n\t\t\t.. sesion Finalizada.."<<endl;
	cout<<"\n\t\t\t     Hasta Pronto       "<<endl;
    cout<<"\t\t*************************************"<<endl;
	
 return 0;
}