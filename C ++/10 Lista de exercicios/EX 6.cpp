/* Construa um algoritmo que leia uma matriz de 3x3, do tipo inteiro, e mostre 
   os elementos pertencentes à diagonal secundária (i + j == t – 1).
*/

#include<iostream>
#define t 3
#include<conio2.h> 
void leitura();
void ds();
int a[t][t];
using namespace std;
main()
{ 
      leitura();
      ds();
      getch();
}
void leitura()
{
      int i, j, col, lin=3;
      textcolor(WHITE);
      cout<<"\tDigite a Matriz: ";
      for(i=0; i<t; i++)
      {
                col=10;
                for(j=0; j<t; j++) 
                {
                         gotoxy(col, lin);
                         cin>>a[i][j];
                         col += 5;
                }
                lin +=2;
     }
}
void ds()
{
     int col, lin=3, i, j;
     for(i=0; i<t; i++)
     {
              col=10;
              for(j=0; j<t; j++)
              { 
                       //gotoxy(col, lin),       //Opcional
                       //cout<<"X";
                       if(i+j == t-1)
                       {
                                  textcolor(LIGHTBLUE);
                                  gotoxy(col, lin);
                                  cout<<a[i][j];
                                  textcolor(WHITE);
                       }
                       col += 5; 
              }
              lin +=2;
     }
     lin += 3;
     textcolor(LIGHTBLUE);
     cout<<"\n\n\tElementos da D.S.";
}
