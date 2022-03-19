/* Construa um algoritmo que leia uma matriz 2 x 3,  calcule e mostre a 
   quantidade de elementos pares e que sejam >=20 e <=50.
*/

#include<iostream>
#include<conio2.h>
void leitura();
void pares();
int a[2][3];
using namespace std;
main() 
{
       leitura();
       pares();
       getch();
}
void leitura()
{
     int col, lin=3, i, j;
     cout<<"\tDigite a Matriz: ";
     for(i=0; i<2; i++)
     {
              col=10;
              for(j=0; j<3; j++)
              { 
                       gotoxy(col, lin);
                       cin>>a[i][j];
                       col += 5;
              }
              lin +=2;
     }
}
void pares()
{
     int col, lin=3, i, j;
     for(i=0; i<2; i++)
     {
              col=10;
              for(j=0; j<3; j++)
              { 
                       if(a[i][j] % 2 == 0 && a[i][j]>=20 && a[i][j]<=50)
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
     cout<<"\n\nElementos pares >=20 e <=50.";
}
