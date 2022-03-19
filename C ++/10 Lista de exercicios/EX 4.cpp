/* Escreva um algoritmo que leia um vetor de 30 elementos do tipo inteiro e: 
   a) Mostre a quantidade de elementos divisíveis por 5; 
   b) Mostre em quais posições os elementos ímpares estão armazenados.
*/ 

#include<iostream> 
#include<conio2.h>
#define t 5
void leitura();
void div(int);
void impar();
int v[t];
using namespace std;
main()
{
      leitura();
      impar();
      getch();
}
void leitura()
{
         int i;
         for(i=0; i<t; i++) 
         {
                  cout<<"\nDigite o "<<i+1<<"o. elemento: ";
                  cin>>v[i];
                  div(v[i]);
         }
         cout<<"\n\n\n";
}
void div(int e)
{
    int i;
    if(e % 5 == 0)
    {
            cout<<"\nO nr \202 divisivel por 5."<<endl;
    }
}
void impar()
{
     int i;
     for(i=0; i<t; i++) 
     {
              if(v[i] % 2 == 1) 
              {
                      cout<<"\nElemento impar na posi\207\306o "<<i+1<<".";
              }
     }
}
