/*Construa um algoritmo que leia v�rios n�meros reais e mostre a soma entre os n�meros lidos. 
O algoritmo dever� ser finalizado quando for lido o elemento  -1, que n�o entrar� para os 
c�lculos. */

#include<iostream> 
#include<conio2.h>
using namespace std;
main()
{
      float s=0, n;
      cout<<"\nDigite um nr: ";
      cin>>n;
      while(n!=-1)
      {
                  s += n;
                  cout<<"\nDigite um nr: ";
                  cin>>n;
      }
      cout<<"\n\n\nA soma total \202: "<<s;
      getch();
} 
