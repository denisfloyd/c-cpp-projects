/* Escreva um algoritmo que leia 15 elementos, do tipo real, e verifique a exis-
   t�ncia de valores iguais � 30. Cada vez que encontrar um valor igual � 30
   mostre em que posi��o ele est� armazenado !
*/

#include<iostream>
#include<conio2.h>
#define t 15
using namespace std;
main()
{
      float v[t];
      int i=0;
      while(i<t)
      {
                cout<<"\nDigite o "<<i+1<<"o. elemento: ";
                cin>>v[i];
                i++;
      }
      cout<<"\n\n";
      for(i=0; i<t; i++)
      {
               if (v[i] == 30)
               {
                        cout<<"\nValor 30 na pos. >  "<<i+1;
               }
      }
      getch();
}
