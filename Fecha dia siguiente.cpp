//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <iostream> // 
using namespace std;

int main() // 
{
    int dd;
    int mm;
    int aaaa;
    int bis;
    int ddmax;
    
    cout << "\n\t\t\tPROGRAMA PARA CALCULAR LA FECHA DEL DIA SIGUIENTE: "<<endl;
    cout << "\t\t   ____________:::______________________:::_________________ "<<endl;  
    cout << "\t\t   _________________________________________________________ "<<endl; 
   
    
    cout << "\nDigite Una Fecha en formato dia, mes, a�o: "<<endl; 
Ingresar1:
    cout <<endl<< "Digite El Dia: ";
    cin >> dd;
    cout << "Digite El Mes : ";
    cin >> mm;
    cout << "Digite El A�o : ";
    cin >> aaaa;
    
     
     if ((aaaa%4 == 0 && aaaa%100 != 0)||aaaa%400==0)
     bis = 2;
     else
     bis = 1;


     if ((mm==1||mm==3||mm==5||mm==7||mm ==8||mm==10||mm==12)&(dd>31)||mm>12)
        {
        cout<<endl<<"\nLa fecha es invalida";
        goto Ingresar1;
        }
     if ((mm==4||mm==6||mm==9||mm==11)&(dd>30)||mm>12)
        {
        cout<<endl<<"\nLa fecha es invalida";
        goto Ingresar1;
        }
     if (((mm==2)&&(bis==2))&(dd>29)||mm>12)
        {
        cout<<endl<<"\nLa fecha es invalida";
        goto Ingresar1;
        }

     if (((mm==2)&&(bis==1))&(dd>28)||mm>12)
        {
        cout<<endl<<"\nLa fecha es invalida";
        goto Ingresar1;
        }
        
    //meses de 31 dias
     if (mm==1||mm==3||mm==5||mm==7||mm ==8||mm==10||mm==12)
        ddmax = 31;
    //meses de 30 dias
     if (mm==4||mm==6||mm==9||mm==11)
        ddmax = 30;
    //a�o bisiesto
     if ((mm==2)&&(bis==2))
        ddmax = 29;
    //a�o no bisiesto
     if ((mm==2)&&(bis==1))
         ddmax = 28;
      
     
     if (dd < ddmax)
     {
         dd = dd + 1;
         mm = mm;
         aaaa = aaaa;
         goto fin;
     }
     
     // si es el ultimo dia del a�o
     if (dd == ddmax && mm == 12)
     {
            dd = 01;
            mm = 01;
            aaaa = aaaa + 1;
            goto fin;
     }
     
     // si es el ultimo dia de un mes
     if (dd == ddmax && mm != 12)
     {
         dd = 01;
         mm = mm + 1;
         aaaa = aaaa;
         goto fin;
     }
      
     fin:
     cout <<endl<<endl<<"\nLa Fecha del dia siguiente es:"<<endl;
     cout <<" Dia: "<< dd << " Mes: " << mm << " A�o: "<<aaaa<<endl;
     cout << "\n********************* "<<endl; 
     cout << dd << "/" << mm << "/"<<aaaa<<endl;
     cout << "********************* "<<endl; 
     
      cout << "\n\t\t **************************************** "<<endl; 
      cout << "\t\t\t..Programa finalizado.."<<endl; 
      cout << "\t\t\t ...Hasta Pronto..."<<endl; 
      cout << "\t\t  **************************************** "<<endl; 
     cin.get();
     cin.get();
}
