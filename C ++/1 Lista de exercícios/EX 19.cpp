/* Construa um algoritmo que leia o salário de um funcionário e o percentual de 
aumento, calcule e mostre o valor do novo salário.  */

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
       cout<<"\n\n\n\nO seu novo salario é:"<<setw(5)<<nsal<<" Reais.";
       getch();
}
       
