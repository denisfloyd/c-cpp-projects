/*      Escreca um algoritmo que leia 6 nrs. inteiros. Calcule e mostre
        a quantidade de nrs >= 10.
*/

#include<iostream>
#include<conio2.h> 
using namespace std;
main()
{
      int c=0, i, nr;
      i=0;
      while(i<6)
      {
            cout<<"\nDigite o nr: ";
            cin>>nr;
            if(nr>=10)
            {
                      c++;
            }
            i++;
      }
      cout<<"\n\nA qtd. de maiores ou iguais a 10: "<<c;
      getch();
}
                 
