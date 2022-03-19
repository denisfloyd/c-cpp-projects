/* Faça um algoritmo que leia um valor em Real e o valor da cotação do dólar do dia. 
Calcule e mostre o valor lido em Real transformado p/ dólares. 
*/

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main() 
{
       float r,xd,dolar;
       cout<<"\n\nDigite o valor em Real: ";
       cin>>r;
       cout<<"\n\n\nInsira a cotacao do Dolar: ";
       cin>>xd;
       dolar=r*xd;
       cout<<"\n\n\nO valor em Dolar é: "<<dolar;
       getch();
}
       
        
