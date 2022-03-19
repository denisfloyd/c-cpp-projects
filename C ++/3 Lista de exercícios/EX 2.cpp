/*Escreva um algoritmo que leia vários números, do tipo real, calcule e mostre: 
a) A média entre todos os elementos lidos; 
b) A multiplicação entre todos os elementos lidos; 
Finalize o algoritmo quando for lido o número -1, que não entrará para os cálculos. */

#include<iostream>
#include<conio2.h> 
#include<iomanip> 
using namespace std;
main()
{
      int c=0; 
      float n, mult=1,s=0;
      cout<<"Digite um numero: ";
      cin>>n;
      while(n!=-1)
      {
                  s += n;
                  mult *= n;
                  c++;
                  cout<<"\nDigite um numero: ";
                  cin>>n;
      }
      cout<<"\n\n\n\nA multiplica\207\306o \202: "<<mult;
      cout<<"\nA m\202dia de todos os nrs \202: "<<s/c;
      getch();
}
                  
                  
                  
