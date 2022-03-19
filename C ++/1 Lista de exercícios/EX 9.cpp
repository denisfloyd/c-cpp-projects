/* O Haras Mangalarga pretende trocar todas as ferraduras de seus cavalos. Escreva 
um algoritmo, que leia o número de cavalos que o Haras possui. Calcule e mostre 
a quantidade de ferraduras necessárias para equipar todos os cavalos do haras. */ 

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
       int a,f;
       cout<<"\nDigite o numero de cavalos: ";
       cin>>a;
       f = a*4;
       cout<<"\n\n\nO numero de ferraduras serao:"<<setw(6)<<f;
       getch();
}
       
