/* Faça um algoritmo que leia uma matriz 4 x 4 de números reais, calcule e mostre a raiz 
   quadrada de elemento pertencente a diagonal secundária.
*/

#include<iostream> 
#include<conio2.h> 
#include<math.h>
#include<iomanip>
#define t 4
using namespace std;
main()
{
      float a[t][t];
      int i, j, col, lin=3;
      textcolor(WHITE);
      cout<<"\tDigite a Matriz: ";
      for(i=0; i<t; i++)
      {
               col=10;
               for(j=0; j<t; j++)
               {
                        gotoxy(col,lin);
                        cin>>a[i][j];                        
                        col += 5;
               }
               lin += 2;
      }
      lin +=5;
      cout<<"\n\n\n\tDiagonal Secundaria (Raiz Quadrada): ";
      for(i=0; i<t; i++)
      {
               col=10;
               for(j=0; j<t; j++)
               {
                        gotoxy(col, lin);
                        cout<<a[i][j];
                        if(i+j == t-1)
                        {
                               gotoxy(col,lin);
                               textcolor(RED);
                               cout<<setprecision(2)<<sqrt(a[i][j]);
                               textcolor(WHITE);
                        }
                        col += 5;
               }
               lin += 2;
      }
      getch();
}

                        
      
