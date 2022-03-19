/*Construa um algoritmo que leia vários números reais e mostre a soma entre os números lidos. 
O algoritmo deverá ser finalizado quando for lido o elemento  -1, que não entrará para os 
cálculos. */

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
