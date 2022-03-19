/* Faça um algoritmo que leia uma matriz 5x5, do tipo real. Calcule e mostre: 
   a) A média entre os elementos da D.S.
   b) A média entre os elementos da D.P.
*/

#include<iostream>
#include<conio2.h>
#define t 5
using namespace std;
main()
{
      float a[t][t], s=0, s1=0;
      int i, j; 
      for(i=0; i<t; i++)
      {
               for(j=0; j<t; j++)
               {
                        cout<<"\na["<<i+1<<"]["<<j+1<<"]: ";
                        cin>>a[i][j];
                        if(i==j)
                        {
                                s += a[i][j];
                        }
                        if(i+j == t - 1)
                        {
                               s1 += a[i][j];
                        }
               }
      }
      cout<<"\n\n\nA m\202dia dos elementos da D.P.: "<<s/t;
      cout<<"\nA m\202dia dos elementos da D.S.: "<<s1/t;
      getch();
}
