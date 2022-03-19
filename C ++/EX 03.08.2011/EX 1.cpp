/* Construa um algoritmo que leia uma matriz 2x3, de inteiros, calcule e mostre
   a quantidade de elementos pares e que pertencem ao intervalo >=20 e <=50
*/

#include<iostream>
#include<conio2.h>
using namespace std;
main()
{
      int m[2][3],q=0, i=0, j;
      while(i<2)
      {
                j=0;
                while(j<3)
                {
                          cout<<"a["<<i+1<<"]["<<j+1<<"]: ";
                          cin>>m[i][j];
                          if(m[i][j] % 2 == 0 && m[i][j]>=20 && m[i][j]<=50)
                          {
                                     q++;
                          }
                          j++;
                }
      i++;
      }
      cout<<"\n\n\nA qtd. de pares e >=20 e <=50 sao: "<<q;
      getch();
}

                                     
      
      
