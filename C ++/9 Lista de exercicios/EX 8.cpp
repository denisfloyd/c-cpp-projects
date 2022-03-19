/* Faça um programa que leia uma matriz 5 x 5 de números reais e encontre o maior valor 
   da matriz. A seguir, multiplique cada elemento da diagonal principal pelo maior valor 
   encontrado. Atualize a matriz. Mostre a matriz resultante, após as multiplicações.
*/

#include<iostream>
#include<conio2.h> 
#define t 5
using namespace std;
main()
{
      float a[t][t], maior;
      int i, j, col, lin=3;
      cout<<"\tDigite a Matriz :";
      for(i=0; i<t; i++)
      {
               col=10;
               for(j=0; j<t; j++) 
               {
                        gotoxy(col,lin);
                        cin>>a[i][j];
                        col+=5;
               }
               lin +=2;
      }
      maior = a[0][0];
      for(i=0; i<t; i++)
      {
               for(j=0; j<t; j++)
               {
                        if(a[i][j]>maior)
                        {
                                         maior = a[i][j];
                        }
               }
      }
      lin +=3;
      cout<<"\n\n\tMatriz Resultante - (Atualizada)";
      for(i=0; i<t; i++)
      {
               col=10;
               for(j=0; j<t; j++)
               {
                        if(i==j)
                        {
                                a[i][j] = a[i][j] * maior;
                                textcolor(3);
                                gotoxy(col, lin);
                                cout<<a[i][j];
                                col +=5;
                                textcolor(WHITE);
                        }
                        else
                        {
                            gotoxy(col, lin);
                            cout<<a[i][j];
                            col += 5;
                        }
               }
               lin +=2;
      }
      getch();
}
