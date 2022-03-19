/* Um motorista deseja completar o tanque de gasolina  de seu carro. Escreva um 
algoritmo para ler o preço do litro da gasolina e o valor apontado na bomba, e 
exibir quantos litros ele conseguiu colocar no tanque. */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
        float p,v,l;
        cout<<setprecision(5);
        cout<<"\nInforme o preço do litro: ";
        cin>>p;
        cout<<"\n\nInforme o valor total: ";
        cin>>v;
        l = v/p;
        cout<<"\n\n\nQuantidade de litros:"<<setw(7)<<l<<" L.";
        getch();
}
        
