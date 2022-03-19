/* Construa um algoritmo que leia a matriz A e a matriz B de 3x2 cada uma delas. 
   A seguir mostre a matriz C como sendo a subtração das matrizes lidas. 
   Dica: c[i][j] = a[i][j] - b[i][j]
*/

#include<iostream> 
#include<conio2.h>
using namespace std;
main()
{
      int a[3][2],b[3][2], c[3][2], i, j, lin=3, col;
      cout<<"\tDigite a matriz A: ";
      for (i=0; i<3; i++)
      {
        col = 10;
        for (j=0; j<2; j++)
        {
             gotoxy(col,lin); //Com a utilização do gotoxy,dispensamos o cout
             cin>>a[i][j];
             col = col + 5;
        }
        lin = lin + 2;
      }
      lin = lin + 3;
      cout<<"\n\n\tDigite a matriz B: ";
      for(i=0; i<3; i++)
      {
               col=10;
               for(j=0; j<2; j++)
               {
                        gotoxy(col,lin);
                        cin>>b[i][j];
                        col = col + 5;
               }
               lin = lin +2;
      }
      lin = lin + 3;
      cout<<"\n\n\tMatriz C: ";
      for(i=0; i<3; i++)
      {
               col=10;
               for(j=0; j<2; j++)
               {
                        gotoxy(col,lin);
                        c[i][j] = a[i][j] - b[i][j];
                        cout<<c[i][j];
                        col = col + 5;
               }
               lin = lin +2;
      }
      getch();
}
      
