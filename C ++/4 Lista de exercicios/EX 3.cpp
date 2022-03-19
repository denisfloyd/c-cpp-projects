/* A empresa Docinho, Florzinha & Lindinha pretende aumentar o salário de seus 
funcionários. Construa um algoritmo que efetue o aumento para cada um dos 
funcionários. O algoritmo deverá solicitar para que o usuário digite o salário do 
funcionário e o percentual de aumento que será concedido para o funcionário. 
Finalize o algoritmo quando o salário for igual a -1. */

#include<iostream>
#include<conio2.h> 
using namespace std;
main()
{
      float sal, p;
      int i, col, lin=6;
      cout<<"\n\t\tDigite os s\240larios: ";
      cout<<"\n\n\tS\240lario\t\tAumento(%)\t\tNovo S\240lario";
      col=9;
      gotoxy(col, lin);
      cin>>sal;
      while(sal != -1)
      {
               col +=17;
               gotoxy(col, lin);
               cin>>p;
               col += 13;
               gotoxy(col, lin);
               cout<<"  --->      "<<sal*(p/100 + 1);
               lin += 2;
               col=9;
               gotoxy(col, lin);
               cin>>sal;
      }
      getch();
}
