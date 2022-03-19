/* Escreva um programa que leia uma matriz 3x4 e guarde todos os elementos da matriz 
   lida num vetor V. Mostre o vetor. 
*/

#include<iostream> 
#include<conio2.h>
using namespace std;
main()
{
      int v[12], i, j, y=0, col, lin=3, a[3][4];
      textcolor(9);
      cout<<"\tDigite a Matriz: " ;
      for(i=0; i<3; i++)
      {
               col=10;
               for(j=0; j<4; j++)
               {
                        gotoxy(col,lin);
                        cin>>a[i][j];
                        v[y]=a[i][j];
                        y++;
                        col += 5;
               }
               lin += 2;
      }            
      cout<<"\n\n\tVETOR: ";
      col=10;
      lin +=4;
      for(y=0; y<12; y++)
      {
               gotoxy(col, lin);
               cout<<v[y];
               col +=5;
      }
      getch();
}
      
                        
