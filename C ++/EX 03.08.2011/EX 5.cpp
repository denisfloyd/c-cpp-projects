/* Faça um algoritmo que leia uma matriz de 25 elementos de inteiros, calcule e
mostre:
   a) A qtd. de elementos pares que estão abaixo da D.P.
   b) O quadrado de cada elementos da D.P.
   c) O somatório dos elementos que estão acima da D.P.
*/

#include<iostream> 
#include<conio2.h> 
#include<math.h>
#define t 5
using namespace std;
main()
{
      int col, lin=3, i, j, a[t][t], s=0, q=0;
      cout<<"\tDigite a Matriz: \t\tQuadrado do elem. da D.P.";
      for(i=0; i<t; i++)
      {
               col = 5;    
               for(j=0; j<t; j++)
               {
                     gotoxy(col, lin);
                     cin>>a[i][j];
                     if (i==j)
                     {
                           gotoxy(45, lin);
                           cout<<"a["<<i+1<<"]["<<j+1<<"]^2: "<<pow(a[i][j],2);
                     }
                     else 
                     {
                          if(i<j)
                          {
                                 s += a[i][j];
                          }
                          else
                          {
                                 if(a[i][j] % 2 == 0)
                                 {
                                            q++;
                                 }
                          }
                     }
                     col +=5;
               }
               lin += 2;
      }
      cout<<"\n\n\nA qtd. de pares abaixo da D.P. : " <<q;
      cout<<"\nO somatorio dos elem. acima da D.P : "<<s;
      getch();
}
      
