/* Escreva um algoritmo que leia vários números, do tipo real, e mostre-os de três 
formas: 
•  Multiplicado por 3; 
•  Somado com 10; 
•  Dividido por 20. 
Finalize o algoritmo quando o usuário digitar o número = -9, que não entrará 
para os cálculos. */

#include<iostream>
#include<conio2.h>
using namespace std;
main()
{
      int col, lin =6;
      float n;
      cout<<"\n\t\tDigite os Numeros: ";
      cout<<"\n\n\tNR\t*3\t+10\t/20";
      col = 9;
      gotoxy(col, lin);
      cin>>n;
      while(n != -9)
      {
               col += 9;
               gotoxy(col, lin);
               cout<<n * 3;
               col += 8;
               gotoxy(col, lin);
               cout<<n + 10;
               col += 8;
               gotoxy(col, lin);
               cout<<n / 20;
               lin += 2;
               col = 9;
               gotoxy(col, lin);
               cin>>n;
      }      
      getch();
}
