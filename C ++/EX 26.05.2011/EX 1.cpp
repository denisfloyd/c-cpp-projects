/* Escreva um algoritmo que leia um vetor de 5 elementos, do tipo real.
   Gere e mostr, o vetor B, do mesmo tipo e tamanho da seguinte forma: 
        Guarde em B, o vetor A, invertido.
*/

#include<iostream>
#include<conio2.h>
#define t 5
using namespace std;
main()
{
      float a[t], b[t];
      for (int i=0; i<t; i++)
      {
          cout<<"\nDigite o "<<i+1<<"o. elemento: ";
          cin>>a[i];
      }
      int j=0;
      clrscr();
      cout<<"\nO VETOR A \n\n";
      for (int i=0; i<t; i++)
      {
          cout<<a[i]<<"\t";
      } 
      cout<<"\n\n\n\n";
      cout<<"O VETOR B \n\n";
      for(int i=4; i>=0; i--)
      {
               b[j] = a[i];
               cout<<b[j]<<"\t";
               j++;
      }
      getch();
}
      
      
