/* Construa um algoritmo que leia o sal�rio de um funcion�rio e o percentual de 
aumento, calcule e mostre o valor do novo sal�rio.  */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
       float sal,per,nsal;
       cout<<"\nDigite o seu salario: ";
       cin>>sal;
       cout<<"\n\nDigite o percentual de aumento: ";
       cin>>per;
       nsal=sal*(per/100)+sal;
       cout<<"\n\n\n\nO seu novo salario �:"<<setw(5)<<nsal<<" Reais.";
       getch();
}
       
