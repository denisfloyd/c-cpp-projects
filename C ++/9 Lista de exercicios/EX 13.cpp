/* Faça um programa que leia as matrizes A e B de 3x8, do tipo inteiro, calcule e mostre: 
   a)  Armazene a soma das duas matrizes na matriz C. Mostre C; 
   b)  Armazene a diferença das duas matrizes na matriz D. Mostre D.
*/

#include<iostream>
#include<conio2.h>
using namespace std;
main()
{
      int a[3][8], b[3][8], c[3][8], d[3][8], col, lin=3, i, j;
      cout<<"\tDigite a Matriz A: ";
      for(i=0; i<3; i++)
      {
               col=10;
               for(j=0; j<8; j++)
               {
                        gotoxy(col, lin);
                        cin>>a[i][j];
                        col +=5;
               }
               lin += 2;
      }
      lin += 3;
      cout<<"\n\n\tDigite a Matriz B: ";
      for(i=0; i<3; i++)
      {
               col=10;
               for(j=0; j<8; j++)
               {
                        gotoxy(col, lin);
                        cin>>b[i][j];
                        col +=5;
               }
               lin += 2;
      }
      for(i=0; i<3; i++)
      {
               for(j=0; j<8; j++)
               {
                       c[i][j] = a[i][j] + b[i][j]; 
               }
      }
      for(i=0; i<3; i++)
      {
               for(j=0; j<8; j++)
               {
                        d[i][j] = a[i][j] - b[i][j];
               }
      }
      lin += 3;
      textcolor(RED);
      cout<<"\n\n\tMatriz C (A+B): ";
      for(i=0; i<3; i++)
      {
               col=10;
               for(j=0; j<8; j++)
               {
                        gotoxy(col, lin);
                        cout<<c[i][j];
                        col +=5;
               }
               lin += 2;
      }
      lin += 3;
      textcolor(BLUE);
      cout<<"\n\n\n\tMatriz D (A-B): ";
      for(i=0; i<3; i++)
      {
               col=10;
               for(j=0; j<8; j++)
               {
                        gotoxy(col, lin);
                        cout<<d[i][j];
                        col +=5;
               }
               lin += 2;
      }
      getch();
}

      
