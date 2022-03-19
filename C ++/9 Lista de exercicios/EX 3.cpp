/* Elabore um algoritmo que leia uma matriz de 4x4, calcule e mostre: 
   •  A soma dos elementos ímpares maiores que 50; 
   •  A média dos elementos de cada uma das linhas; 
   •  A soma dos elementos das colunas pares 
        (suponha que as colunas pares sejam: 1 e 3); 
   •  O maior valor da matriz. 
*/
   
#include<iostream> 
#include<conio2.h>
#define t 4
using namespace std;
main()
{
      int col, lin=3,a[t][t], s, s1=0, i ,j, maior;
      cout<<"\tDigite a MATRIZ !";
      for(i=0; i<t; i++)
      {
               s=0;
               col =10;
               for(j=0; j<t; j++)
               { 
                        gotoxy(col,lin);
                        cin>>a[i][j];
                        s +=a[i][j];
                        if(j==1 || j==3)
                        {
                               s1 += a[i][j];
                        }
                        if(i==0 && j==0)
                        {
                               maior = a[i][j];
                        }
                        else
                        {
                            if(a[i][j]>maior)
                            {
                                             maior = a[i][j];
                            }
                        }
                        col += 5;
               }
               cout<<"\t\t\t\tM\202dia= "<<s/t;
               lin+=4;
      }
      cout<<"\n\n\nSoma das colunas pares: "<<s1;
      cout<<"\nMaior elemento da Matriz: "<<maior;
      getch();
}

      
                        
