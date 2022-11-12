//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include <iostream> 
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
#include <string.h> 
#include <conio.h>

using namespace std;


int main() 
{
    char ca [100];
    int ct;
    int ct1;
    int sw = 0;
    int cont = 0;
    
    
    cout<<"\t\t\tPROGRAMA PARA SEGURIDAD DE CONTRASE�AS  "<<endl;
    cout<<"\t\t_______________________________________________________"<<endl;
    cout<<"\t\t_______________________________________________________"<<endl;
    cout<<"\nIngrese su Nueva Contrase�a para ser guardada en el Sistema "<<endl;
    cin>>ca;
    
    ct = atoi(ca);
    int lcont = strlen(ca);
    cout<<"\nTiene 4 intentos "; 
    while (sw == 0)
    {
     
    cout<<"..Para poder hacer su trasaccion.."<<endl;   
    cout<<"\nDigite La Contrase�a: "<<endl;
    cin>>ct1;
    
        if (ct==ct1)
        {
            sw=1;
            cout<<"\n\t\t********************************************"<<endl;
            cout<<"\n\t\t\t          BIENVENIDO           "<<endl;
            cout<<"\t\t...Estamos Procesando su Informacion ...."<<endl;
            cout<<"\n\t\t********************************************"<<endl;
        }
        else
        { 
         cont = cont + 1;
         cout<<"\nIntento No : "<<cont<<endl;
       
       
         cout<<"\nError... la contrase�a no es Valida : "<<endl;
          
       
       }
       
       if (cont == 3)
       {
       cout<<"\nVerifique su contrase�a E ingresela nuevamente "<<endl;
       }
       
       if (cont == 4)
       {
       cout<<"\nNivel de Error: "<<cont<<"  ERRORES"<<endl;
       cout<<"\n\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
       cout<<"\n\t\t\tSu cuenta ha sido Bloqueada por Seguridad "<<endl;
       cout<<"\n\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
       
       sw=1;
       }                             
     }
       cout<<"\n\t\t********************************"<<endl;
       cout<<"\n\t\t\tPROGRAMA FINALIZADO"<<endl;
       cout<<"\n\t\t\t..HASTA PRONTO.."<<endl;
       cout<<"\n\t\t********************************"<<endl;
     

     cin.get();
     cin.get();
} 
