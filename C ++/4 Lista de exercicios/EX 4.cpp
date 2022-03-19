/* Sabe-se que para iluminar de maneira correta os cômodos de uma casa, para 
cada m2, deve-se usar 18w de potência. Faça um algoritmo que leia as duas 
dimensões de um cômodo (em metros), calcule e mostre: 
a.  A área do cômodo (em m2); 
b.  A potência de iluminação que deverá ser utilizada.

Finalize o algoritmo quando a primeira dimensão for igual a 0.
*/ 

#include<iostream>
#include<conio2.h> 
using namespace std;
main()
{   
      textcolor(WHITE);
      float m1, m2, area;
      int col, lin=6;
      cout<<"\n\t\tDigite as medidas: ";
      cout<<"\n\nComprimento\tLargura\t\tArea\t\tPotencial Necess\240rio";
      col=2;
      gotoxy(col, lin);
      cin>>m1;
      while(m1 != 0)
      {
               col +=17;
               gotoxy(col, lin);
               cin>>m2;
               area = m1 * m2;
               col += 15;
               gotoxy(col, lin);
               cout<<area;
               col += 17;
               gotoxy(col, lin);
               textcolor(YELLOW);
               cout<<area * 18<<" W.";
               textcolor(WHITE);
               lin += 2;
               col=2;
               gotoxy(col, lin);
               cin>>m1;
      }
      getch();
}
