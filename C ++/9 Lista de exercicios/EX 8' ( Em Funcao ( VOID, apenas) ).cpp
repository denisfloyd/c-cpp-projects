/* Com função, apenas do tipo VOID  */ 

#include<iostream>
#include<conio2.h>
using namespace std;
#define t 3
void leitura();
void maior();
float a[t][t];
main()
{
      leitura();
      maior();
      getch();
}

void leitura()
{
     int i, j, lin=3, col;
     gotoxy (5,1);
     cout<<"Digite a Matriz: ";
     for(i=0; i<t; i++)
     {
              col=5;
              for(j=0; j<t; j++) 
              {
                       gotoxy(col, lin);
                       cin>>a[i][j];
                       col += 5;
              }
              lin +=2;
     }
}

void maior()
{
     int i, j, col, lin=3;
     float maior = a[0][0];
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
     gotoxy(35,1);lin=3;
     cout<<"A nova Matriz";
     for(i=0; i<t; i++) 
     {
              col = 35;
              for(j=0; j<t; j++)
              {
                       if(i==j)
                       {
                               a[i][j] = a[i][j] * maior;
                       }
                       gotoxy(col, lin);
                       cout<<a[i][j];
                       col += 5;
              }
              lin += 2;
     }
}
