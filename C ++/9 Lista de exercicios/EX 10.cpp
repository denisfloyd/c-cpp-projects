/* Faça um programa que leia uma matriz 7x7, do tipo inteiro, e gere dois vetores de 7 
   posições cada um e que contenham, respectivamente, o maior elemento de cada uma das 
   linhas e o menor elemento de cada uma das colunas. Mostre os dois vetores.
*/

#include<iostream>
#include<conio2.h>
#define t 7
using namespace std;
main()
{
      int a[t][t], v[t], f[t], col, lin=3, i, j, maior, menor;
      textcolor(YELLOW);
      cout<<"\tDigite a Matriz: ";
      for(i=0; i<t; i++)
      {
               col=10;
               for(j=0; j<t; j++)
               {
                        gotoxy(col, lin);
                        cin>>a[i][j];
                        if(j==0)
                        {
                               maior = a[i][j];
                               v[i] = maior;
                        }
                        else
                        {
                            if(a[i][j]>maior)
                            {
                                             maior = a[i][j];
                                             v[i] = maior;
                            }
                        }
                        col+=5;
               }
               lin+=2;
      }
      for(j=0; j<t; j++)
      {
               for(i=0; i<t; i++)
               {
                        if(i==0)
                        {
                               menor = a[i][j];
                               f[j] = menor;
                        }
                        else
                        {
                            if(a[j][i] < menor)
                            {
                                       menor = a[i][j]; 
                                       f[j] = menor;
                            }
                        }
               }
      }  
      cout<<"\n\n\n\nVetor com maiores de cada linha: \n\n";
      for(i=0; i<t; i++) 
      {
               cout<<v[i]<<"\t";
      }
      cout<<"\n\nVetor com menores de cada coluna: \n\n";
      for(i=0; i<t; i++)
      {
               cout<<f[i]<<"\t";
      }
      getch();
}
      
      
