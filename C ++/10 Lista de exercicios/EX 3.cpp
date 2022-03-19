/* Escreva um algoritmo que calcule e mostre o somatório dos  ímpares de um 
   vetor M de 6 elementos inteiros.
*/

#include<iostream>
#include<conio2.h>
#define t 6
void leitura();
int verifica (int);
void imprime(int);
int v[t];
using namespace std;
main()
{
      leitura();
      getch();
}
void leitura(){
     int i, a, s=0;
     for(i=0; i<t; i++)
     {
              cout<<"\nDigite o "<<i+1<<"o. elemento: ";
              cin>>v[i];
              a= verifica(v[i]);
              if(a==1)
              {
                      s+=v[i];
              }
     }
     imprime(s);
}
int verifica(int p)
{
    if(p % 2 == 1)
    {
         return 1;
    }
    else
    {
        return 0;
    }
}
void imprime(int k)
{
    cout<<"\n\nA soma dos impares: "<<k;
}
    
    

