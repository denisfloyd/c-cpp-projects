/* A empresa Igual Diferente S/A deseja conceder um aumento salarial de 5% para 
todos os seus 20 funcionários. Escreva um algoritmo que leia o salário de cada 
funcionário, a seguir calcule e mostre o novo salário. */

#include<iostream>
#include<conio2.h>
using namespace std;
main()
{
      float sal;
      int i, col, lin=6;
      cout<<"\n\t\tDigite os s\240larios: ";
      cout<<"\n\n\tS\240lario\t\tNovo S\240lario";
      for(i=0; i<20; i++)
      {
               col=9;
               gotoxy(col, lin);
               cin>>sal;
               col += 10;
               gotoxy(col, lin);
               cout<<"--->      "<<sal*1.05;
               lin += 2;
      }
      getch();
}
