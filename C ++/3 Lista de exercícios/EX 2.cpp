/*Escreva um algoritmo que leia v�rios n�meros, do tipo real, calcule e mostre: 
a) A m�dia entre todos os elementos lidos; 
b) A multiplica��o entre todos os elementos lidos; 
Finalize o algoritmo quando for lido o n�mero -1, que n�o entrar� para os c�lculos. */

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
                  
                  
                  
