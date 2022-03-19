/* Um Pet Shop precisa calcular o custo de criação de todos os seus coelhos. Para o 
cálculo é preciso levar em consideração que o custo de um coelho é R$0,70 e o 
custo fixo é de R$10,00. Escreva um algoritmo que mostre o custo total a partir do 
número de coelhos da loja. */

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
       int a;
       float c;
       cout<<setprecision(4);
       cout<<"\nDigite o nr de coelhos: ";
       cin>>a;
       c = a*0.70+10.00;
       cout<<"\n\nO custo total de criacao sera de:"<<setw(7)<<c<<" Reais.";
       getch();
}
       
      
