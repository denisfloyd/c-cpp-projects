/* Fa�a um algoritmo que leia o sal�rio de um funcion�rio, calcule e mostre o novo 
sal�rio, sabendo-se que este sofre um aumento de 25%. Experimente multiplicar o 
sal�rio por 1.25. */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main() 
{
       float nsal,a;
       cout<<"\n\n\nDigite o valor do salario: ";
       cin>>nsal;
       a=(nsal*0.25)+nsal;
       cout<<"\n\n\nO novo salario � de: "<<setw(2)<<a;
       getch();
}
       
       
