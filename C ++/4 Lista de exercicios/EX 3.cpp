/* A empresa Docinho, Florzinha & Lindinha pretende aumentar o sal�rio de seus 
funcion�rios. Construa um algoritmo que efetue o aumento para cada um dos 
funcion�rios. O algoritmo dever� solicitar para que o usu�rio digite o sal�rio do 
funcion�rio e o percentual de aumento que ser� concedido para o funcion�rio. 
Finalize o algoritmo quando o sal�rio for igual a -1. */

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
