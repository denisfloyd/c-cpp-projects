/* Faça um algoritmo que leia uma matriz de 5x5, do tipo real e mostre: 
  •  Os elementos da diagonal principal; 
  •  Os elementos da diagonal secundária; 
  •  Os elementos que estão acima da diagonal principal.
*/

#include<iostream>
#include<conio2.h>
using namespace std;
#define t 5
main()
{
      int col, lin=3, i, j, a[t][t];
      textcolor(WHITE);
      cout<<"\tDigige a matriz: ";
      for (i=0; i<t; i++)
      {
        col = 10;
        for (j=0; j<t; j++)
        {
             gotoxy(col,lin);
             cin>> a[i][j];
             col = col + 5;
        }
        lin = lin + 2;
      }
      lin +=3;
      cout<<"\n\n\tElementos da D.P. e acima dela: ";
      for (i=0; i<t; i++)
      {
        col = 10;
        for (j=0; j<t; j++)
        {
             gotoxy(col,lin);
             cout<<a[i][j];
             if(i==j)
             {
                     textcolor(RED);
                     gotoxy(col,lin);
                     cout<<a[i][j];
                     textcolor(WHITE);
             }
             if(i<j)
             {
                    textcolor(YELLOW);
                    gotoxy(col,lin);
                    cout<<a[i][j];
                    textcolor(WHITE);
             }
             col = col + 5;
        }
        lin = lin + 2;
      }
      lin +=3;
      cout<<"\n\n\n\tElementos da D.S. : ";
      for (i=0; i<t; i++)
      {
        col = 10;
        for (j=0; j<t; j++)
        {
             gotoxy(col, lin);
             cout<<a[i][j];
             if(i+j==t-1)
             {
                         textcolor(BLUE);
                         gotoxy(col,lin);
                         cout<<a[i][j];
                         textcolor(WHITE);
             }
             col = col + 5;
        }
        lin = lin + 2;
      }
      getch();
}
