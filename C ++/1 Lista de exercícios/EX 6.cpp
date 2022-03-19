/*Escreva um algoritmo que leia um valor do tipo Real e, a seguir mostre-o 
multiplicado por 3. */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main() 
{
       float a,mult;
       cout<<"Digite um numero: ";
       cin>>a;
       mult=a*3;
       cout<<"\n\nO nr multiplicado por 3 \202: "<<setw(1)<<mult;
       getch();
}
       
