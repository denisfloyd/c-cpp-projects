/* Sabe-se que para iluminar de maneira correta os c�modos de uma casa, para 
cada m2, deve-se usar 18w de pot�ncia. Fa�a um algoritmo que leia as duas 
dimens�es de um c�modo (em metros), calcule e mostre: 
a.  A �rea do c�modo (em m2); 
b.  A pot�ncia de ilumina��o que dever� ser utilizada.

Finalize o algoritmo quando a primeira dimens�o for igual a 0.
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
