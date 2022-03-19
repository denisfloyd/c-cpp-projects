/* Faça um algoritmo que leia um valor em quilometro e transforme-o para metros. 
Imprima o resultado. */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main() 
{
       float km,metros;
       cout<<"\n\nDigite quantos quilometros: ";
       cin>>km;
       metros=km*1000;
       cout<<"\n\n\nA distancia em metros é: "<<metros;
       getch();
}
       
