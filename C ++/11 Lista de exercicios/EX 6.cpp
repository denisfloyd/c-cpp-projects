/*Escreva um programa que crie uma estrutura para 10 valores do tipo real. Calcule e 
mostre: 
     a) A média entre os elementos maiores que 30 e menores que 50; 
     b) A quantidade de elementos cuja a raiz quadrada é inferior a 20; 
     c) O maior elemento armazenado na estrutura; 
     d) A posição na qual se encontra o menor elemento armazenado na estrutura.*/
     
#include<iostream>
#include<conio2.h>
#include<math.h>
#define t 10
using namespace std;
main()
{
      struct info
      {
             float n;
      };
      info a[t];
      float s=0, maior, menor;
      int c=0, q=0, cont=0;
      for(int i=0; i<t; i++)
      {
              cout<<"\nDigite o "<<i+1<<" elemento: ";
              cin>>a[i].n;
              if(a[i].n > 30 && a[i].n <50)
              {
                        s += a[i].n;
                        cont++;
              }
              if(sqrt(a[i].n) < 20)
              {
                              c++;
              }
      }
      maior = a[0].n;
      menor = a[0].n;
      for(int i=1; i<t; i++)
      {
              if(a[i].n > maior)
              {
                        maior = a[i].n;
              }
              if(a[i].n < menor)
              {
                        menor = a[i].n;
                        q = i;
              }
      }
      cout<<"\n\n\nA m\202dia entre os > 30 e < 50 : "<<s/cont;
      cout<<"\nA qtd. de elementos onde a raiz quadrada \202 < 20 : "<<c;
      cout<<"\nA maior elemento: "<<maior;
      cout<<"\nO menor elemento se encontra na posi\306\207o: "<<q+1;
      getch();
}
