/* Faça um programa que leia uma matriz de 10x10, do tipo inteiro, calcule e mostre: 
   a)  O somatório dos elementos que estão na diagonal secundária; 
   b)  Troque a linha 2 com a linha 8. Atualize a matriz e mostre-a após a troca; 
   c)  Some cada elemento da coluna 3 com cada elemento da coluna 9. Armazene-os num 
   vetor. Mostre o vetor.
*/

#include<iostream> 
#include<conio2.h>
using namespace std;
#define t 10
main()
{
      int a[t][t], s=0, v[t], aux, i, j, col, lin=3;
      cout<<"\tDigite a Matriz: ";
      for(i=0; i<t; i++)
      {
               col=10;
               for(j=0; j<t; j++) 
               {
                        gotoxy(col,lin);
                        cin>>a[i][j];
                        col+=5;
                        if(i+j == t-1)
                        {
                               s += a[i][j];
                        }
               }
               lin +=2;
      }
      for(i=0; i<t; i++)
      {
               for(j=0; j<t; j++) 
               {
                        if(j==2)
                        {
                               v[i] = a[i][j] + a[i][8];
                        }
               }
      }
      for(i=1; i<2; i++)
      {
               for(j=0; j<t; j++) 
               {
                        aux = a[7][j];
                        a[7][j]=a[i][j];
                        a[i][j] = aux;
               }
      }
      lin+=3;
      cout<<"\n\n\tLinha 2 trocada com \205 linha 8: ";
      for(i=0; i<t; i++)
      {
               col=10;
               for(j=0; j<t; j++)
               {
                        gotoxy(col,lin);
                        cout<<a[i][j];
                        col+=5;
               }
               lin+=2;
      }
      cout<<"\n\n\nSomat\242rio da D.S: "<<s;
      cout<<"\n\nVETOR (Soma de cada elemento col. 3 com cada da col. 9: \n\n";
      for(i=0; i<t; i++)
      { 
               cout<<v[i]<<"\t";
      }
      getch();
}               

      
