//James Betancourt
//Curso de Programaci�n C++
//Ingenieria Electronica 
#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int dia; 
int mes; 
int ano; 
int ffec; 
int fec1;

int main()
{
cout<<"\t\t\t=============================="<<endl;
cout<<"\t\t\t   CALCULAR DIAS  VIVIDOS  "<<endl;
cout<<"\t\t\t=============================="<<endl;
	
cout<<"Ingrese su fecha de nacimiento en en el siguente formato dd,mm,aaaa por separado"<<endl;	
cout<<"\nDigite el dia de nacimiento"<<endl;
cin>>dia;
cout<<"\nDigite el mes de nacimiento: "<<endl;
cin>>mes;
cout<<"\nDigite el a�o completo de nacimiento"<<endl;
cin>>ano;
if(mes==4||mes==6||mes==9||mes==11)
{
fec1=(30-dia)+(30*3)+(31*7)+(28);
ffec=(2009-ano)*fec1;

cout<<"\n                                      :::::::::::::::::::"<<endl;
printf("Los Dias Transcurridos Hasta Hoy Son: :: %d  Dias    ::\n",ffec);
cout<<"                                      ::::::::::::::::::: "<<endl;
}
else
{
if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)
fec1=(31-dia)+(30*4)+(31*6)+(28);
ffec=(2009-ano)*fec1;
cout<<"\n                                      ::::::::::::::::::: "<<endl;
printf("Los Dias Transcurridos Hasta Hoy Son: :: %d  Dias    :: \n",ffec);
cout<<"                                      ::::::::::::::::::: "<<endl;
}
if(mes==2)
{
fec1=(28-dia)+(30*4)+(31*7);
ffec=(2009-ano)*fec1;
cout<<"\n                                       ::::::::::::::::::: "<<endl;
printf("Los Dias Transcurridos Hasta Hoy Son:  :: %d  Dias    ::\n",ffec);
cout<<"                                       ::::::::::::::::::: "<<endl;
}
cout<<"\n\n\t\t ************************"<<endl;
cout<<"\t\t    programa finalizado "<<endl;
cout<<"\t\t     ..Hasta Pronto.. "<<endl;
cout<<"\t\t ************************"<<endl;

system("pause");
return 0;
}