/* Escreva um algoritmo que leia duas matrizes, A e B (3x3) e calcule, numa matriz R, 
   o quadrado de cada elemento de A somado ao quadrado de cada elemento de B. Mostre 
   a matriz resultante R.
*/

#include<iostream> 
#include<conio2.h>
#define t 3
#include<math.h>
using namespace std;
main()
{
      int col, lin=3, i, j;
      float a[t][t],b[t][t],r[t][t];
      cout<<"\tDigite a matriz A: ";
      for(i=0; i<t; i++) 
      {
               col =10;
               for(j=0; j<t; j++) 
               {
                        gotoxy(col,lin);
                        cin>>a[i][j];
                        col += 5;
               }
               lin += 2;
      }
      lin += 3;
      cout<<"\n\n\tDigite a matriz B: ";
      for(i=0; i<t; i++) 
      {
               col =10;
               for(j=0; j<t; j++) 
               {
                        gotoxy(col,lin);
                        cin>>b[i][j];
                        col += 5;
               }
               lin += 2;
      }
      lin += 3;
      cout<<"\n\n\tMatriz Resultante: ";
      for(i=0; i<t; i++) 
      {
               col =10;
               for(j=0; j<t; j++) 
               {
                        gotoxy(col,lin);
                        r[i][j] = pow(a[i][j],2) + pow(b[i][j],2);
                        cout<<r[i][j];
                        col += 5;
               }
               lin += 2;
      }
      getch();
}

      
