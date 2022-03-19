/* Escreva um algoritmo que leia uma matriz quadrada, do tipo inteiro, calcule e mostre: 
  •  O maior elemento armazenado abaixo da diagonal principal; 
  •  A soma dos elementos pares >= 10 e <= 30; 
  •  O menor elemento da matriz.
*/

#include<iostream>
#include<conio2.h> 
#define t 3
using namespace std;
main()
{
      int a[t][t], i, j, col, lin=3, maior, menor, s=0;
      cout<<"\tDigite a Matriz: ";
      for (i=0; i<t; i++)
      {
        col = 10;
        for (j=0; j<t; j++)
        {
             gotoxy(col,lin);
             cin>> a[i][j];
             col = col + 5;
             if(a[i][j] % 2 ==0 && a[i][j]>=10 && a[i][j] <=30)
             {
                        s +=a[i][j];
             }
             if(i==0 && j==0)
             {
                     menor = a[i][j];
             }
             else
             {
                 if(a[i][j]<menor)
                 {
                                  menor = a[i][j];
                 }
             }
             if(i>j)
             {
                    maior = a[i][j];
             }
        }
        lin = lin + 2;
      }
      for (i=0; i<t; i++)
      {
        for (j=0; j<t; j++)
        {
             if(i>j && a[i][j]>maior)
             {
                    maior=a[i][j];
             }
        }
      }
      lin=3;
      for (i=0; i<t; i++)
      {
        col = 10;
        for (j=0; j<t; j++)
        {
             if(i>j && a[i][j] == maior)
             {
                    textcolor(RED);
                    gotoxy(col,lin);
                    cout<< a[i][j];
                    textcolor(WHITE);
             }
             if(a[i][j] ==menor)
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
      textcolor(RED);
      cout<<"\n\n\nMaior elemento abaixo da D.P. : ";
      textcolor(YELLOW);
      cout<<"\nMenor elemento da matriz: ";
      textcolor(WHITE);
      cout<<"\nSoma dos pares >= 10 e <= 30: "<<s;
      getch();
}
      
