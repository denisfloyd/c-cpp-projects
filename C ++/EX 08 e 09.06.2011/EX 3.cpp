/* Fa�a um algoritmo que leia o nome do funcion�rio e a qtd. de pulsos telof�ni-
   cos consumidos por 10 funcion�rios, durante um m�s. Armazene os dados em do-
   is vetores(vetor nome e vetor pulsos). Ap�s a leitura do algoritmo deve: 
   a) Imprimir o nome dos funcion�rios que consumiram mais de 200 pulsos.
   b) Calcular a m�dia de consumo da empresa.
*/

#include<iostream>
#include<conio2.h>
#define t 10     
using namespace std;
main()
{
      char n[t][50];
      int p[t], s=0,i;
      for(i=0; i<t; i++)
      {
               cout<<"\nDigite o nome do funcion\240rio: ";
               gets(n[i]);
               cout<<"\nDigite os pulsos consumidos por "<<n[i]<<" : ";
               cin>>p[i];
               s += p[i];
               fflush(stdin);
      }
      cout<<"\n\n\n";
      for(i=0; i<t; i++)
      {
               if(p[i]>200)
               {
                           cout<<n[i]<<" consome mais de 200 pulsos!\n";
               }
      }
      cout<<"\n\nA m\202dia da empresa \202: "<<s/t;
      getch();
}

                           
