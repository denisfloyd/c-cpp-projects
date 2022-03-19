/*4.  Escreva um programa que leia uma  estrutura, de inteiros, com tamanho de 10 
posições:  
0 1 2 3 4 5 6 7 8 9 
150 200 80 227 100 125 4 77 9 53 
a.  Calcule e mostre a quantidade de valores pares; 
b.  Calcule e mostre a média entre os valores da estrutura.*/

#include<iostream>
#include<conio2.h>
#define t 10
using namespace std;
main()
{     
      struct dados
      {
             int n;
      };
      dados a[t];
      int cp = 0, s=0, i;
      for(i=0; i<t; i++)
      {
               cout<<"\nDigite o "<<i+1<<" valor: ";
               cin>>a[i].n;
               if(a[i].n % 2 == 0)
               {
                         cp++;
               }
               s += a[i].n;
      }
      system("cls");
      cout<<"\nA qtd. de pares: "<<cp;
      cout<<"\nA m\202dia entre os elementos: "<<s/t;
      getch();
}
