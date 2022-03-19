/* Escreva um algoritmo que defina um vetor de 12 posições, do tipo inteiro. O algoritmo 
deverá ler todos os elementos (da posição 1 até a posição 10). Pede-se:
  a. Armazene na posição 0 a soma dos elementos PARES. Mostre o resultado da 
  soma; 
  b.  Armazene na posição 11 a soma dos elementos ÍMPARES. Mostre o resultado 
  da soma; 
  c.  Encontre o maior elemento do vetor (da posição 1 até a posição 10). */

#include<iostream> 
#include<conio2.h> 
#define t 12
using namespace std;
main()
{
      int v[t],i=1, maior; 
      v[0]=0; v[11]=0;
      cout<<"\nDigite o "<<i<<"o. elemento: ";
      cin>>v[i];
      maior=v[i];
      for(i=2;i<t-1;i++)
      {
                      cout<<"\nDigite o "<<i<<"o. elemento: ";
                      cin>>v[i];
                      if (v[i]>maior)
                      {
                                     maior=v[i];
                      }
      }
      for(i=1;i<11;i++)
      {
                      if(v[i]%2==0)
                      {
                                   v[0] += v[i];
                      }
                      else
                      { 
                          v[11] += v[i];
                      }
      }
      cout<<"\n\n\n\n";
      cout<<"A soma dos Pares \202: "<<v[0];
      cout<<"\nA soma dos impares \202: "<<v[11];
      cout<<"\nO maior elemento \202: "<<maior;
      getch();
} 
