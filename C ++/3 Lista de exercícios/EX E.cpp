/*      Algoritmo sem o nr exato de repetições.
        Calcule a soma e multiplicação dos nrs, finalizar o algoritmo
        quando digitado o nr -500. 
*/

#include<iostream>
#include<conio2.h>
using namespace std;
main()
{
      float s=0, n, mult=1; 
      cout<<"\nDigite um nr: ";
      cin>>n;
      while(n!=-500) 
      {
                     s += n;
                     mult *= n;
                     cout<<"Digite um nr: ";
                     cin>>n; 
      }
      system("cls");
      cout<<"\n\nA soma \202: "<<s;
      cout<<"\nA multiplica\207\306o \202: "<<mult;
      getch();
}

