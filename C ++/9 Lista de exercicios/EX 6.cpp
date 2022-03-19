/* Faça um algoritmo que leia uma matriz de 3x3 do tipo inteiro. A seguir armazene num 
  vetor, do tipo inteiro e de tamanho 3: 
  •  0 se a soma de cada coluna da matriz for um número PAR; 
  •  1 se a soma de cada coluna da matriz for um número ÍMPAR; 
  Mostre a soma de cada uma das colunas e o valor armazenado no vetor.
*/ 

#include<iostream> 
#include<conio2.h>
#define t 3
using namespace std;
main()
{
      int a[t][t], col=10, lin=3, i, j, v[t], s;
      cout<<"\tDigite a Matriz: ";
      for(j=0; j<t; j++) 
      {
               s=0;
               lin=3;
               for(i=0; i<t; i++)
               {        
                        gotoxy(col,lin);
                        cin>>a[i][j];
                        lin +=2;
                        s += a[i][j];
               }
               cout<<"\t\t\t\tSoma da coluna "<<j+1<<": "<<s;
               if(s % 2==0)
               { 
                    v[j] = 0;
               }
               else
               {
                   v[j] = 1;
               }
               col +=6;
      }
      cout<<"\n\n\n\tVETOR \n\n\t";
      for(j=0; j<t; j++)
      {
               cout<<v[j]<<"\t";
      }
      getch();
}

      
                        
