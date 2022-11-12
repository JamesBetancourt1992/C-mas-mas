//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <iostream> 
using namespace std;

int main() 
{
    
    int categoria;
    double sueldo;  
    int horas;
    
 Opcion:

    cout<<"\t\t\tPAGO DE EMPLEADOS POR CATEGORIAS "<<endl;
    cout<<"\t\t****************************************"<<endl;
    cout<<"\n....MENU DE OPCIONES....  "<<endl;
    cout<<"\n1.Empleados Categoria 1 "<<endl;
    cout<<"2.Empleados Categoria 2 "<<endl;
    cout<<"3.Empleados Categoria 3 "<<endl;
    cout<<"4.Empleados Categoria 4 "<<endl;
       
    cout<<"\nSelecciona Una Opcion: "<<endl;
    cin>> categoria;
    
   
    switch (categoria)
    {
    case 1: sueldo = 20000;break;
    case 2: sueldo= 15000;break;
    case 3: sueldo= 10000;break;
    case 4: sueldo= 7500;break;
    default:
            cout<<endl<< "No es una categoria valida "<<endl;
            goto Opcion;
    }
    
    cout<<"Ingrese el numero de horas trabajadas por el empleado: ";
    cin >> horas;
    
    double salario = double(sueldo*horas) - double(0.072*(sueldo*horas));
    
    if (salario<1000000)
    salario = salario + 0.15*(sueldo*horas);
    
    cout<<endl<< "El pago al empleado debe ser: "<<salario;
    cin.get();
    cin.get();
    
    cout<<"\n\t\t***************************************"<<endl;
    cout<<"\t\t\tPrograma Finalizado"<<endl;
    cout<<"\t\t\t..Hasta Pronto.."<<endl;
    cout<<"\n\t\t***************************************"<<endl;
    
}    
