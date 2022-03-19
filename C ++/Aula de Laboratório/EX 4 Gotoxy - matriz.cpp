/* Execícios dados como exemplo no laboratório de Info. 
   Como utilizar gotoxy
*/

#include<iostream>
#include<conio2.h> //Para usar o gotoxy é preciso dessa biblioteca
#define t 3
using namespace std;
main (){
     int a[t][t],i,j,lin=3,col;
     cout<<"\tDigite a matriz 3x3";
     for (i=0; i<=t-1; i++){
        col = 10;
         for (j=0; j<=t-1; j++){
             gotoxy(col,lin); //Com a utilização do gotoxy,dispensamos o cout
             cin>> a [i][j];
             col = col + 5;
             }
             lin = lin + 2;
         }
         lin =3;
         for(i=0; i<t; i++){
                  col=10;
                  for (j=0; j<t; j++){
                      if(i==j){
                               textcolor(YELLOW);
                               gotoxy(col,lin);
                               cout<<a[i][j];
                               textcolor(WHITE);
                               }
                               col = col+5;
                      }
                      lin=lin+2;
                  }
         getch();
     }
