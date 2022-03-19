/* Escreva um algoritmo que leia o peso de várias pessoas, calcule e mostre: 
a.  O novo peso se a pessoa engordar 15% sobre o peso digitado; 
b.  O novo peso se a pessoa emagrecer 20% sobre o peso digitado. 
Finalize o algoritmo quando o usuário digitar peso = 0. */

#include<iostream>
#include<conio2.h> 
using namespace std;
main()
{
      float p;
      int col, lin=6;
      cout<<"\n\t\tDigite os Pesos: ";
      cout<<"\n\n\tPeso\t\tEngordar(15%)\t\tEmagrecer(20%)";
      col = 9;
      gotoxy(col, lin);
      cin>>p;
      while(p != 0)
      {
               col += 17;
               gotoxy(col, lin);
               cout<<p * 1.15;
               col += 24;
               gotoxy(col, lin);
               cout<<p - (p * 0.2);
               lin += 2;
               col = 9;
               gotoxy(col, lin);
               cin>>p;
      }
      getch();
}
