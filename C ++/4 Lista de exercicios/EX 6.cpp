/* Escreva um algoritmo que leia v�rios n�meros, do tipo real, e mostre-os de tr�s 
formas: 
�  Multiplicado por 3; 
�  Somado com 10; 
�  Dividido por 20. 
Finalize o algoritmo quando o usu�rio digitar o n�mero = -9, que n�o entrar� 
para os c�lculos. */

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
