/* A imobili�ria  Im�bilis vende apenas terrenos retangulares. Fa�a um algoritmo 
para ler as dimens�es de um terreno e depois exibir a sua �rea. Para encontrar a 
�rea do terreno utilize: AT = lado1 * lado2.  */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
       float a,b,at;
       cout<<"Digite o comprimento do terreno:  ";
       cin>>a;
       cout<<"\nDigite a largura do terreno:  ";
       cin>>b;
       at=a*b;
       cout<<"\n\nArea do terreno e':"<<setw(7)<<at<<setw(3)<<"cm2.";
       getch();
}
       
